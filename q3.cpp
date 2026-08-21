#include<stdio.h>

int main()
{
	int ang1, ang2, ang3;
	printf("First Angle:");
	scanf("%d", &ang1);
	printf("Second Angle:");
	scanf("%d", &ang2);
	ang3 = 180 - ( ang1 + ang2);
	printf("Third angle: %d", ang3);
}