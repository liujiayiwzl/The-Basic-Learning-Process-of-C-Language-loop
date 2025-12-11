#include<stdio.h>
#include<math.h>
#include<stdlib.h>

int main()
{

/*
	 math.h:
	        pow(n，n的几次方）幂  double
			sqrt（）        平方根  double
			ceil（）       向上取整  double
			floor（）      向下取整  double
			abs  （）        绝对值  int
			fabs（）       double小数的绝对值
			fabsf（）      float小数的绝对值

	stdlib.h:
	        abs（）         绝对值 int
	        labs()         long类型的绝对值
			llabs（）      long long类型的绝对值		
*/

	//1.pow 幂
	double res1 = pow(3, 4);
	printf("%lf\n", res1);

	//2.sqrt 平方根
	double res2 = sqrt(81);
	printf("%.2lf\n", res2);

	//3.ceil 向上取整
	double res3 = ceil(5.2);
	printf("%.3lf\n", res3);

	//4.floor 向下取整
	double res4 = floor(6.1);
	printf("%lf\n", res4);

	//5.abs 绝对值
	int res5 = abs(-52);
	printf("%d\n", res5);
	 
	//6.fabs小数绝对值
	double res6 = fabs(-6.11);
	printf("%lf\n", res6);
	
	//7.labs  long类型绝对值
	long res7 = labs(-123456L);
	printf("%ld\n", res7);
	
	//8.llabs  long long类型绝对值
	long long res8 = llabs(-9876543210LL);
	printf("%lld\n", res8);

	return 0;
}