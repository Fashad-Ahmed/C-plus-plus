// bullet ----> not static
// total no. of bullets ---> static ---> 100
// har gun mai bullet 10
// 
#include <iostream>
using namespace std;

class combat	
	{
		private:
			
			static int bullet;
			
		public:
		
		void reloadMagazine()
		
			{
				cout << "You wanna  reload it here you go! " << endl;
				bullet = 10;
				cout << "reloaded : " << bullet << endl;
				
			}	
			
		void getSource()
		
			{	
				bullet -= bullet;
				
				if ( bullet == 0)
					{
						
						cout << "The Magazine is out of bullets " << endl;
					}
				else
					{
						cout << bullet << endl;
						
					}
			}
	};
	
int combat :: bullet = 10;

int main()
	{
		
		combat c1,c2;
		
		c1.getSource();
		c1.reloadMagazine();
		c2.getSource();
		c2.reloadMagazine();
		
		cout << endl;
		return 0;
		
	}
