#include <iostream>
using namespace std;

class counter
{
	private:
		unsigned int count;		// count
		
	public:
		counter() : count(0)			// constructor
		{ }
		
		unsigned int getcount()			// return count
		{
			return count;
		}
		
		counter operator ++ ()  // increment count   --- overloading
		
		// void operator ++ ()
		{
			++count; 			// increment  count
			counter temp;     // make a temporary counter
			temp.count = count;  		// give it same value as this object
			return temp; 
		}
 };
 
int main()
{
	counter c1,c2;			// c1 = 0 , c2 = 0
	cout << "\nc1 = " << c1.getcount();
	cout << "\nc2 = " << c2.getcount();
	
	++c1; 			// c1 = 1
	c2 = ++c1; 		// c1 = 2 , c2= 2
	
	cout << "\nc1 = " << c1.getcount();
	cout << "\nc2 = " << c2.getcount() << endl;
	
		

}
