/*
题目3：求1-5累加的和

步骤一：定义一个变量来累加数据
步骤二：利用for循环，获取1-5之间每一个数
*/


#include<stdio.h>
int main()
{
	//1.定义一个变量来累加
	int sum = 0;
    
    /*
	         2：for循环获取1-5每一个数，并且用sum累加
	   	   第一次循环中： i=1 ， sum=0；
					 1+0=1，把结果赋值给sum

		   第二次循环中： i=2 ， sum=1；
					 2+1=3，把结果赋值给sum

	*/
for (int i = 1; i <= 5; i++)
{
	sum = i + sum;
	}


//3：打印累加的sum
printf("%d\n", sum);



	return 0;
}