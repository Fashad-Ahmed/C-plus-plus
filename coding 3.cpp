#include <stdio.h>
#include <conio.h>
int main()
{
int distance,shortDistance;
printf("enter distance in Km:");
scanf("%d",&distance);
shortDistance = 1000 * distance;
printf ("Distance in m : %d",shortDistance );
}
