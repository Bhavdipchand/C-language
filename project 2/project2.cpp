#include<stdio.h>

int main()

{
	int N;
	printf("Enter your score:");
	scanf("%d",&N);
	if(N>=85)
	{
		printf("Your grade is A.Excellent work! You are eligible for the next level.");
	}
	else if(N>=75)
	{
		printf("Your grade is B.Well done! You are eligible for the next level.");
	}
	else if(N>=60)
	{
		printf("Your grade is C.Good job! You are eligible for the next level.");
	}
	else if(N>=35)
	{
		printf("Your grade is D.You passed! You are eligible for the next level.");
	}
	else
	{
		printf("Your grade is F.Sorry, You faild.Please try again next time.");	
	}	
}
