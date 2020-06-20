#include <iostream>
using namespace std;

void table(char,int);													// function declaration

int main()
{
	char b;
	int a;
	
	cout << "Enter the number to generate its table : ";
	cin >> a;
	cout << "\nenter string : \n";
	cin >> b;
	table(b,a);
	return 0;
}


void table(char b, int a)
{
	for(int j=1; j<=12 ;j++)
		cout <<a << " x " << j << b << a*j<<"\n";
	cout << endl; 
}
