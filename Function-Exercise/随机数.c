#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{

	/*
	     随机数<stdlib.h> standard library	
	     设置种子 srand（）
		 获取随机数 rand（）

		 随机数两个弊端：
		         1：种子不变，随机数结果固定 srand（）括号中东西得变化才是随机

		         解决：使用时间作为随机数种子


		          2：随机数的范围不确定
		              默认范围： 0-32767

		         任意范围获取随机数：小 ~ 大 的随机数
		             rand() % (最大值-最小值 + 1）+ 最小值

		
	*/


	/*
	       题目：
		       自定义范围随机数，键盘录入猜测，猜中为止
			   支持输入任意范围随机数，包含合法性检验
    */

	//  0.输入并校验随机数范围
	int min, max;
	printf("请输入随机数最小值：");
	scanf("%d", &min);
	printf("请输入随机数最大值：");
	scanf("%d", &max);
	      
	    //校验最小值是否大于最大值
	if (min > max)
	{
		printf("最小值不能大于最大值，请重新输入！\n");
		printf("请输入随机数最小值：\n");
		scanf("%d", &min);
		printf("请输入随机数最大值：\n");
		scanf("%d", &max);
	}



	//  1.设置种子
	srand(time(NULL));

	//  2.获取随机数
	int range = max - min + 1;
	int num = rand() % range + min;//范围是rand() % range + min


	//  3.循环猜数字，直到猜中
	int guess;
	int count = 0;//统计猜数次数的变量

	printf("\n开始猜数字吧（范围%d~%d）！\n", min, max);
	while (1)//无限循环
	{
		count++;//每次循环次数+1
		printf("请输入你猜的数字：");
		scanf("%d", &guess);
		if (num == guess)
		{
			printf("恭喜你，猜中了！你一共猜了%d次\n",count);

			//根据次数给出评价
		      if (count <= 5)
		      {
			      printf("评价：太厉害了，简直是猜数大神！\n");
		      }
		      else if (count <= 10)
		      {
			      printf("评价：很不错，继续加油！\n");
		      }
		      else
		      {
			      printf("评价：多试试技巧，下次会更快哦！\n");
		      }
			break;
		}

		else if (guess < num)
		{
			printf("猜小了，再试试！\n");
		}
		else
		{
			printf("猜大了，再试试！\n");
		}
	}

	return 0;
}