#include <stdio.h>
#include <conio.h>
int main()
{
	int number,num1,num2,num3,num4,num5;
	printf("please enter a number: ");
	scanf("%d",&number);
	num1 = number%10;
	number = number/10;
	num2 = number%10;
	number = number/10;
	num3 = number%10;
	number = number/10;
	num4 = number%10;
	number = number/10;
	printf("the sum is: %d \nEND :) %d",num1+num2+num3+num4+number);
}
