#include <stdio.h>
int main (){
	char a;
	printf("enter a gender : ");
	scanf("%c",&a);
	if (a=='m')
	{
		printf("gender : male");
    }
    else if (a=='f')
    {
    	printf("gender : female");
	}
	else{
		printf("gender is neither male nor female");
	}
}
