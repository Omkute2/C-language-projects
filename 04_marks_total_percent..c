//program for 3 parer marks ,total,percentage.
#include<stdio.h>
int main()
{
	int c,sql,java,total;
	float per;
	char grade;
	printf("\n\tEnter marks for sub.:");
	scanf("%d",&c);
	printf("\n\tEnter marks for sub. sql:");
	scanf("%d",&sql);
	printf("\n\tEnter marks for sub. java:");
	scanf("%d",&java); 
	total=c+sql+java;
	per=total*100/300;
	
	if(per>=90)
		grade='A';
	else
		if(per>=80&&per<90)
		grade='B';
	else
		if(per>=70&&per<80)
		grade='C';
	else
		if(per>=60&&per<70)
		grade='D';
	else
		if(per>=40&&per<60)
		grade='E';
	else
	    grade='fail';
	    
	printf("\nGrade : %c \tTotal marks : %d \tpPercentage is : %f ");
	return 0;
}
