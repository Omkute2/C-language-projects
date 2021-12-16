#include<stdio.h>
int main()
{
	float a,b,res;
	printf("|Enter the value of a and b:");
	scanf("%f%f",&a,&b);
	res=(a*a)+(b*b)+2*a*b;
	printf("\nResult is: %f",res);
	return 0;
}
