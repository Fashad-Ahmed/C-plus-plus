#include <iostream>
using namespace std;

void square(int);
void third(int);
void fourth(int);

int main()
{
	
	int num_;
	int num1;
	int num2;
	
	square(num_);
	third(num1);
	fourth(num2);
	
	return 0;
	
}

void square(int num_)
	{
		for(int i=1; i<=5 ; i++)
			cout << "\n Square of " << i << " is " << i*i;
		cout << endl;	
	}
void third(int num1)
	{
		for(int i=1; i<=5 ; i++)
			cout << "\n Cube of " << i << " is " << i*i*i;
		cout << endl;
	}
void fourth(int num2)
	{
		for(int i=1; i<=5 ; i++)
			cout << "\n Fourth Power of " << i << " is " << i*i*i*i;
		cout << endl;
	}
	
//	for loop is appropriate
//	when you know in advance how many times the loop will be executed. The while and do loops
//	are used when you don’t know in advance when the loop will terminate (the while loop when
//	you may not want to execute the loop body even once, and the do loop when you’re sure you
//	want to execute the loop body at least once)
		
