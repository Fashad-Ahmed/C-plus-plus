// This code will cover constructor overloading, defining memeber function outside the class and objects as function arguments

#include <iostream>
using namespace std;

class distance
	{
		private:
			int feet;
			float inch;
			
		public:
			
			distance() : feet(0),inch(0.0)
			{ }
			
			distance(int ft,float in) : feet(ft) , inch(in)
			{ }
			
			void getdist()
				{
					// get lngth from user
					
					cout << "\n enter name: " ; cin >> feet;
					cout << "\n enter inches: " ; cin >>inch;
					
				}
				
			void showdist()
				{
					cout << feet << " | " << inch << " | ";
				}
				
			void add_dict(distance , distance);			// declaration ----- constructors as arguments
			
	};

// now relate the fucntion

void distance :: add_dict (distance d2 ,distance d3 )
	{
		inch = d2.inch + d3.inch;
		feet = 0;
		if (inch >= 12.0 )
			{
				inch -= 12.0;
				feet++;
			}
			feet += d2.feet + d3.feet; 			// add fet
	}


int main()
	{
		distance dist1,dist3;    						// define two lengths
		distance dist2(11,6.25);												// define and initialize d2
		
		dist1.getdist(); 					// gett dist1 from user
		dist3.add_dict(dist1,dist3) 			// dist3 = dist 1 + dist 2
		
		// display all outputs
		
		cout << "\ndist1 = ";
			<< dist1.showdist();
		
		cout << "\ndist2 = ";
			<< dist2.showdist();
			
		cout << "\ndist3 = ";
			<< dist3.showdist();	
			
		cout << endl;
		return 0;
		
	}
