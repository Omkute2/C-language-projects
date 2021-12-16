#include<stdio.h>
int main()
{
	float F,c;
	printf("\nEnter temperature in centigrade:");
	scanf("%f",&c);
	F=(1.8*c)+32;
	printf("\nTemperature in Fahrenheit is:%.2f",F);
	return 0;
}
