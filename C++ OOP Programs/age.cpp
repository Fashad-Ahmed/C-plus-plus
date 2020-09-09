//# include <iostream>
//using namespace std;
//
//int main()
//{
//	int age;
//	cout<< "what's your age ? \n";
//	cin>> age;
//	
//	cout<<"your age is : ";
//	cout<< age;
//	return 0;
//	
//}
#include <iostream>
using namespace std;

int power(int,int);
double power(double,int);
long power(long,int);
float power(float,int);

int power(int n,int p){
	int result = 1;
	for(p ; p>=1 ; p--){
		result = result * n;
	}
	return result;
}
double power(double n,int p){
	double result = 1.0;
	for(p ; p>=1 ; p--){
		result = result * n;
	}
	return result;
}
long power(long n,int p){
	long result = 1.0;
	for(p ; p>=1 ; p--){
		result = result * n;
	}
	return result;
}
float power(float n,int p){
	float result = 1.0;
	for(p ; p>=1 ; p--){
		result = result * n;
	}
	return result;
}
int main()
{
	for(int i=0 ; i<4 ; i++){
		if (i==0){
			int n,p;
			cout << "\n enter number : " << endl;
			cin >> n;
			cout << "\n enter power : " << endl;
			cin >> p;
			cout << "Result : " << power(n,p) << endl;
		}		
		if (i==1){
			double n;
			int p;
			cout << "\n enter number : " << endl;
			cin >> n;
			cout << "\n enter power : " << endl;
			cin >> p;
			cout << "Result : " << power(n,p) << endl;
		}
		if (i==2){
			long n;
			int p;
			cout << "\n enter number : " << endl;
			cin >> n;
			cout << "\n enter power : " << endl;
			cin >> p;
			cout << "Result : " << power(n,p) << endl;
		}
		if (i==3){
			float n;
			int p;
			cout << "\n enter number : " << endl;
			cin >> n;
			cout << "\n enter power : " << endl;
			cin >> p;
			cout << "Result : " << power(n,p) << endl;
		}
	}
	return 0;
}

