#include <stdio.h>
int main()
{
	int a, year;
	printf("Enter a year:");
	scanf("%d",&year);
	a = year%7;
	switch(a){
		case 0 :{
			printf("Sunday");
			break;
		}
		case 1 :{
			printf("Monday");
			break;
		}
		case 2 :{
			printf("Tuesday");
			break;
		}
		case 3 :{
			printf("Wednesday");
			break;
		}
		case 4 :{
			printf("Thursday");
			break;
		}
		case 5 :{
			printf("Friday");
			break;
		}
		case 6 :{
			printf("Saturday");
			break;
		}
	}
}
