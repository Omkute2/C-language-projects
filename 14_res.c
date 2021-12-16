#include<stdio.h>
int main()
{
	float a,b,res;
	printf("|Enter the value of a and b:");
	scanf("%f%f",&a,&b);
	res=((a*a*a)+(a+b)*(a+b)+(b*b*b)+4*a)/4;
	printf("\nResult is: %f",res);
	return 0;
}
