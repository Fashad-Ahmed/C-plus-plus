// Review question
#include <iostream>
using namespace std;

class atm 
	{
		private:
			static int user;
			int cashPresent = 10000;
			int usedMoney;
			
		public:
			
			atm()
				{
					user++;
				}
			
			static int tran()
				{
					return user;
				}
			
			void inputAmount()
				{
					cout << "enter amount of money you want to transact : " << endl;
					cin >> usedMoney;
				}
				
			void outputAmount()
				{
					cout << "You take " << usedMoney << " from net total " << endl;
					cout << "Remaining Net worth is : " << cashPresent - usedMoney << endl;
					cout << "TRANSACTION COMPLETED! " << endl;

					
				}
	};
	
int atm :: user = 0;

int main()
{	
	atm u1,u2;
	
	u1.inputAmount();
	u1.outputAmount();
	
	u2.inputAmount();
	u2.outputAmount();
	
	cout << "Number of users : " << atm :: tran();
	
//	cout << "Remaining Net worth is : " << cashPresent << endl;
	
	cout << endl;
	return 0;
	

}
	
