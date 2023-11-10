#include<stdio.h>

main()
{
	int salary,hra,da,ta,gross;
	
	printf("salary =");
	scanf("%d",&salary);
	
	printf("HRA =");
	scanf("%d",&hra);
	
	printf("DA =");
	scanf("%d",&da);
	
	printf("TA =");
	scanf("%d",&ta);
	
	gross=salary+(hra*salary/100)+(da*salary/100)+(ta*salary/100);
	
	printf("Gross Salary =%d",gross);	
}