#include <stdio.h>
int main()
{
int basic,houseRent,gross,clear;
printf("Please enter a basic salary:");
scanf("%d",&basic);
houseRent = 20 * basic/ 100;
clear = 40 * basic/ 100;
gross = basic + houseRent + clear;
printf ("gross salary :%d" , gross);
}
