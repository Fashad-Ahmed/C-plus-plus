#include <iostream>
using namespace std;

void starline();													// function declaration

int main()
{
	starline();
	cout << "Data	Type	Range" << endl;
	starline();
	cout << "char		-128 to 127" << endl;
	cout << "short		-32,768 to 32,768" << endl;
	cout << "int		 System independent" << endl;
	cout << "long		 -7777..........7777" << endl;
		
	starline();
	return 0;

}

void starline()													// fucntion declarator
{
	for(int j =0; j<45; j++)
		cout << "*";
	cout << endl;

}

