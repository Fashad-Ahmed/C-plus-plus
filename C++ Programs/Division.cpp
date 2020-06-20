# include <iostream>
using namespace std;

int main()
{
	long div1 , div2;
	char c;
	
	do
	{
		cout << "Enter dividend : "  ; cin >>div1;
		cout << "\nEnter divisor :  "  ; cin >> div2;
		cout << "\nEnter Qoutient :  "  << div1/div2; 
		cout << "\nThe Remainder is :  " << div1 % div2;
		
		cout << "\nYou wanna do more division (y/n) : "; cin>>c;
		
	}
	
	while (c != 'n');
	return 0;
	
}
	
