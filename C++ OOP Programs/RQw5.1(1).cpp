// bullet ----> not static
// total no. of bullets ---> static ---> 100
// har gun mai bullet 10
//
 
#include <iostream>
using namespace std;

 class combat	
	{
		private:
			
			static int totalBullet;
			int bulletFired;
			int gunBullet = 10;
			
		public:
			
		void getSource()
		
			{	
				
				cout << "\n************* CAMP REPORT ************" << endl ;
				cout << "Enter number of bullets fired : " << endl ; 
				cin >> bulletFired;
					
			}
		
		void reloadMagazine()
		
			{
				
				cout << "You wanna re-load !" << endl;
				
				if ( totalBullet == 0 )
					{
						
						cout << "The Magazine is out of bullets " << endl;
					}
				else if (  totalBullet <= 100   && totalBullet > 0   )
					{
						gunBullet += 10;
						totalBullet -= 10;
						
						cout << "RELOADED!" << endl;
						cout << "Total Bullets after Re-loading : " << totalBullet;
						
					}
			}
			
		void giveReport()
			
			{
				if ( bulletFired < 11)
				
					{
						cout << "Total Number of bullets left in camp : " << totalBullet - ((gunBullet - bulletFired))<< endl;
					}
				
				else
					{
						cout << "invalid entry" << endl;
					}
				
			}	
			
		
	};
	
int combat :: totalBullet = 100;

int main()
	{
		
		combat c1,c2;
		
		c1.getSource();
		c1.giveReport();
		c1.reloadMagazine();
		
		c2.getSource();
		c2.giveReport();
		c2.reloadMagazine();
		
		cout << endl;
		return 0;
		
	}
