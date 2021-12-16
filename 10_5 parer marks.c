#include<stdio.h>
int main()
{
	char name[10];
	int rn,p1,p2,p3,p4,p5,t;
	float per;
	printf("\nenter student name:");
	scanf("%s",&name);
	printf("\nenter student roll no.:");
	scanf("%d",&rn);
	printf("\nenter marks of all 5 papers");
	scanf("%d%d%d%d%d",&p1,&p2,&p3,&p4,&p5);
	t=p1+p2+p3+p4+p5;
	per=100*t/500;
	printf("\nStudent name: %s \nRoll no.: %d \n ",name,rn);
	printf("____________________________________");
	printf("\n Paper 1 marks : %d\n Paper 2 marks : %d\n Paper 3 marks : %d\n Paper 4 marks : %d\n Paper 5 marks : %d",p1,p2,p3,p4,p5);
	printf("\n____________________________________");
	printf("\n         Total : %d\tPercentage : %.2f",t,per);
	return 0;
}
