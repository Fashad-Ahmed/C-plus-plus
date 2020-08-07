#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

double n(double,int);
int n(int,int);
float n(float,int);

int main()
	{
		int a;
		int a1;
		int a11;
		int d1;
		float d;
		double num;
		
		
		cout << "enter number : \n" << endl ; cin >> num;
		cout << "the output is  : " << n(num,a) << endl;
		
		
		cout << "enter integar : \n" << endl ; cin >> a1;
		cout << "the result of integar input is : " << n(a1,a11)  << endl;
		
		
		cout << "enter float : \n" << endl ; cin >> d;
		cout << "the result of float is : " << n(d,d1) << endl;
		
		return 0;
	}
	
double n(double num,int a=2)
	{
		double ans = 1.00;
		for (int i=0; i<a ; i++){
			ans *= num;
		return ans;
		}
//		cout << "the output is  : " << ans << endl;
	}
	
int n(int a1 , int a11=2)
	{
		int result = 1;
		for (int j=0 ; j<a11 ; j++){
			result *= a1;
		return result;
		}
//		cout << "the result of integar input is : " << result << endl;
	}

float n(float d , int d1 = 2)
	{
		int res = 1.00;
		for (int x=0 ; x<d1 ; x++){
			res *= 	d;
		return res;
		}
//		cout << "the result of float is : " << res << endl;
	}	
