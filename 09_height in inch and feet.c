#include<stdio.h>
int main()
{
	float f,i,h;
	printf("\nEnter your height : \t");
	scanf("%f",&h);
	i=h*12;
	printf("\nyour height in inches is: \t%f",i);
	f=h*2.54;
	printf("\nYour height in feets is : \t%f",f);
	return 0;
}
