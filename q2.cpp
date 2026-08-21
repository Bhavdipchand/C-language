#include<stdio.h>

int main()
{
	float basesalary, HRA, DA, TA, grosssalary;
	printf("Base-salary:");
	scanf("%f", &basesalary);
	HRA = basesalary * 0.10;
	DA = basesalary * 0.05;
	TA = basesalary * 0.08;
	grosssalary = basesalary + HRA + DA + TA ;
	printf("gross-salary: %.2f", grosssalary);
	
	
}