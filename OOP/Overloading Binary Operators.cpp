#include <iostream>
using namespace std;

class di
{
	private:
		int feet;
		float inches;
		
	public:
		di() : feet(0) , inches(0.0)
		{ }
		
		di(int ft,float in) : feet(ft),inches(in)
		{ }
		
		void getdist()
			{
				cout << "\n feet: " << endl; cin >> feet;
				cout << "\n inches: " << endl; cin >> inches;
			}
			
		void showdist()
		{
			cout << "f? " << feet << "i ? " << inches << endl; 
		}
		
		di operator + (di) const; // add 2 distances
		
};
											
												// add this distance to d2
di di::operator +(di d2) const      // return sum
{
	int f  = feet + d2.feet;
	float i  = inches + d2.inches;
	if (i>=12.0){
		i-=12.0;
		f++;
	}
	return di(f,i);
}


//							if member function initializes in a class

//	distance operator + (distance d2)
// int f = feet + d2.feet;
// float i = inches + d2.inches;
// if ( i >= 12.0 )
// {
// 	i -= 12.0;
// 	f++;
// 	
// }
// return distance (f,i);


int main()
{
	di d1,d3,d4;
		
	d1.getdist();
	
	di d2(11,6.5);
	
	d3 = d1 + d2;
	d4 = d1 + d2 + d3;
	
	d1.showdist();
	d2.showdist();
	d3.showdist();
	d4.showdist();
	
	return 0;
	
}
