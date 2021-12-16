#include<stdio.h>
#define PI 3.1452
int main()
{
	float Vc,r,h;
	printf("Enter Redius and Height");
	scanf("%f%f",&r,&h);
	Vc=PI*r*r*h;
	printf("volume of rectangle is:%f",Vc);
	return 0;
}
