// int no of cars
// double total cash
//  constructe initialize to 0  ----------- > multi purpose
//  memeber fuc. --->  inc. & no. of cars * cash  + 0.50 oaying cash         
// memebr func. -----> inc. & no. of cars * cash  nonpaing cash
// memeber func ------> show both reslts
// 1 key to payinng and 2nd key for nonpaying

// -------------------------------- total cars -----------------------

#include <iostream>
using namespace std;

class toolBooth
	{
		
		private:
				
				unsigned int num;
				double total;
		
		public:
			
			toolBooth()
				{
					num = 0;
					total = 0.0;
					cout << "\n Constructor " << endl;
					
				}
			
			void giveCar()
				{
					cout << "\n Enter Number of Cars : " << endl;
					cin >> num;
					
					cout << "\n Enter the Cash : " << endl;
					cin >> total;
				}
				
			void payingCar()
				{
					cout << "\n Paying Cars Cash Total : " << ((num * total) + 0.50) << endl;
					cout << "\n Single Paying Car Cash Total : " << ((total++) + 0.50) << endl;
					cout << "\n Number of Paying Cars : " << num << endl;
				}
				
			void nonpayingCar()
				{
					cout << "\n Non-Paying Cars Cash Total : " << (num * total) << endl;
					cout << "\n Single Non - Paying Car Cash Total : " << (total++) << endl;
					cout << "\n Number of Non - Paying Cars : " << num << endl;
				}
				
	};
 

int main()
	{
		toolBooth t1;
		toolBooth t2;
		
		t1.giveCar();
		t1.payingCar();
		
		t2.giveCar();
		t2.nonpayingCar();
		
		cout << endl;
		return 0;
		
	}
