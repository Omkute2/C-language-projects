#include<stdio.h>
int main()
{
	float BS,GS,HRA,DA,TA;
	printf("\nEnter basic salary ");
	scanf("%f",&BS);
	HRA=BS*0.60;
	printf("\nHRA is:%2f",HRA);
	DA=BS*0.50;
	printf("\nDA is:%2f",DA);
	TA=BS*0.40;
	printf("\nTA is:%2f",TA);
	GS=BS+HRA+DA+TA;
	printf("\nYour Gross Salary is:%2f",GS);
	printf("\nYour Gross Salary is:%f",GS);
	return 0;
}
