#include<stdio.h>
#define PI 3.1452
int main()
{
	float V,l,h,w;
	printf("Enter Lenth, Height and Width");
	scanf("%f%f%f",&l,&h,&w);
	V=l*h*w;
	printf("volume of rectangle is:%f",V);
	return 0;
}
