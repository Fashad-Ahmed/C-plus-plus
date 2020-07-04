#include <iostream>
using namespace std;

void cal(double inpo1,double inpo2,char op);

int main()
{

	char op;
	double inpo1;
	double inpo2;	
	
	cout << "Enter the operation you want to do : ";
	cin >> op;
	
	cout << "Enter the first number : ";
	cin >> inpo1;
	cout << "Enter the second number : ";
	cin >> inpo2;
	cal(inpo1,inpo2,op);
	

}


void cal(double inpo1,double inpo2,char op)
{	
	double out;
	
		if(op == '+'){
			out =  inpo1 + inpo2 ;

		}
		else if(op == '-'){
			out = inpo1 - inpo2 ;
	
		}
		else if(op == '*'){
			out = inpo1 * inpo2 ;
	
		}
		else if(op == '/'){
			out = inpo1 / inpo2 ;
	
		}
		
		cout << "output is : " << out;
}
