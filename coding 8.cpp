#include <stdio.h>
#include <conio.h>
int main()
{
	int num1,num2,num3;
	printf("enter first number: ");
	scanf("%d",&num1);
	printf("enter second name: ");
	scanf("%d",&num2);
	num3 = num1;
	num1 = num2;
	num2 = num3;
	printf("num1: %d \nnum2: %d",num1,num2);
	
}
