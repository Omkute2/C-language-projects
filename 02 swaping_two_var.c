/* program for interchange two var. using 3rd var*/
#include<stdio.h>
int main()
{
	int a,b,temp;
	printf("\nEnter any two num:");
	scanf("%d%d",&a,&b);
	temp=a;
	a=b;
	b=temp;
	printf("\nAfter swaping number: \t a=%d \t b=%d",a,b);
	return 0;
}
