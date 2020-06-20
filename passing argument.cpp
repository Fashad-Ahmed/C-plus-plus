#include <iostream>
using namespace std;

void starline(char,int);													// function declaration

int main()
{
	starline('*',44);
	cout << "Data	Type	Range" << endl;
	starline('@',36);
	cout << "char		-128 to 127" << endl;
	cout << "short		-32,768 to 32,768" << endl;
	cout << "int		 System independent" << endl;
	cout << "long		 -7777..........7777" << endl;
		
	starline('*',44);
	return 0;

}

void starline(char a,int b)													// fucntion declarator
{
	for(int j =0; j<b; j++)
		cout << a;
	cout << endl;

}

