#include<stdio.h>
int main()
{
	int num,c,a,b,rev;
	printf("Enter any three digit number:");
	scanf("%d",&num);
	a=num%10;
	num=num/10;
	b=num%10;
	num=num/10;
	c=num;
	rev=a*100+b*10+c;
	printf("\nReverse number is %d",rev);
	return 0;
}
