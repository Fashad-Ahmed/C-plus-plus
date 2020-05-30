#include <stdio.h>
int main()
{
	for(int a= 1; a<=20 ;a++)
	{
		for(int b = 1; b<=21-a;b++)
		{
			printf("*");
			
		}
		printf("\n");
	}
}
