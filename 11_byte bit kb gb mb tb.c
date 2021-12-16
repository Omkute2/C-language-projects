#include<stdio.h>
int main()
{
	double byte,bit,kb,mb,gb,tb;
	printf("Enter Bytes :");
	scanf("%lf",&byte);
	bit=8*byte;
	kb=byte/1024;
	mb=kb/1024;
	gb=mb/1024;
    tb=gb/1024;
	printf("\n %lf byte is : %lf bit \n %lf byte is : %lf kb \n %lf kb is : %lf mb \n %lf mb is: %lf gb \n %lf gb is: %lf tb, ",byte,bit,byte,kb,kb,mb,mb,gb,gb,tb);
	return 0;
}
