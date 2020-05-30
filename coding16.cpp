#include <stdio.h>
int main()
{
	int i=10 , a;
	do{
	printf("Enter a Character: ");
	scanf("%d",&i);
	if(i!=a)
	printf("Wrong guess Try Again ;) ..... \n");
}
    while(a!=i); //a  is  not equal to i
    printf("Right Guess...YOU WON.....");		
}
