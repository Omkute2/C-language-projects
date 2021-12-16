/*W.A.P. for  add. sub. mult. div.*/

#include<stdio.h>
#include<conio.h>
int main()
{
	int a,b,sum,sub,mul,div;
	printf("\nEmter any two num :");
	scanf("%d%d",&a,&b);
	sum=a+b;
	printf("\nAddition of %d and %d is:%d",a,b,sum);
	sub=a-b;
	printf("\nSubtrtraction of %d and %d is:%d",a,b,sub);
	mul=a*b;
	printf("\nMultiplication of %d and %d is:%d",a,b,mul);
	div=a/b;
	printf("\nDivision of %d and %d is:%d",a,b,div);
	return 0;
}

