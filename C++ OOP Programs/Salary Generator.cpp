// double --- > double dataType

// This a program to calculate an Employee Salary

# include <iostream>
using namespace std;

int main(){
	
	// double both datatye integar and float
	double hour , rate , pay;
	
	cout<<"Enter number of hours you work : ";
	cin>>hour;
	
	cout<<"Enter your working hour per rate : ";
	cin>>rate;
	
	pay = hour * rate;
	
	cout<<"You've earned : "<<pay<<"$"<<endl;
	
	return 0;
	
}
