#include<stdio.h>
int main()
{
	float a,b,res;
	printf("|Enter the value of a and b:");
	scanf("%f%f",&a,&b);
	res=((a*a)+(b*b))*((a*a)+(b*b))+(((a+b)*(a+b))/2);
	printf("\nResult is: %f",res);
	return 0;
}
