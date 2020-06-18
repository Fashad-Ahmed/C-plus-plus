#include <stdio.h>
int main()
{
	float centigrade,farenheit;
	printf("Please enter temperature in centigrade: ");
	scanf ("%f", &centigrade);	
	 farenheit = ( centigrade * 1.8 + 32);
	printf (" temperature in farenheit : %f ",  farenheit);
}
