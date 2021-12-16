/* program for swaping two var. without using third var.*/
#include<stdio.h>
int main()
{
	int a,b;
	printf("\nEnter any two num");
	scanf("%d%d",&a,&b);
	printf("\nBefor swaping numers: \t a=%d and \t b=%d",a,b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf("\nAfter swaping number:\t a=%d and \t b=%d",a,b);
	
	return 0;
}
