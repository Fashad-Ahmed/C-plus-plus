#include <iostream>
using namespace std;

class Distance
	{
		private:
			int feet;
			float inches;
			
		public:
			Distance()
				{
																	// default const. feet and inches initialized to 0 first
					feet = 0;
					inches = 0.0;
				}
			
			Distance(int ft,float in)
				{
					feet = ft;
					inches = in;
				}
       			 
			void getdist()
				{
					cout << "\nenter feet : "  ; 
					cin >> feet;
					cout << "\nenter inches : "  ;
					cin >> inches;
					cout << endl;
				}
				
			void show_dist()
				{
					cout << " feet is : " << feet << " and inches is : " << inches << endl;
				}
				
	};
	
int main()
	{
		Distance dist1;						// default constructor
		Distance dist2(11,6.25);				// multi-argument constructor
		Distance dist3(dist2);						// copy constructor 1st way
		Distance dist4 = dist3;						// copy constructor 2nd way
		
		dist1.getdist();
		cout << "\n dist1  ---- >  " ; dist1.show_dist();
		
		cout << "\n dist2  ---- >  " ; dist2.show_dist();
		
		cout << "\n dist3  ---- >  " ; dist3.show_dist();
		
		cout << "\n dist1  ---- >  " ; dist4.show_dist();
		
		cout << endl;
		return 0;
		
	}
