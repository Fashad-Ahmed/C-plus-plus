// A  COUNTER
// It provides a counter varibale thta can only be modified by its memeber functons

// objects represent a counter variable

#include <iostream>
using namespace std;

class counter
	{
		private:
			unsigned int count;										// count
		public:
			counter() : count(0)												// constructor
//				{count = 0;}
				{cout << "I'm the constructor!!!\n";}											// OR counter : count(0)
			void inc_count()
				{
					count++;
				}
			int get_count()
				{
					return count;
				}
	
	};
	
int main()
	{
		counter c1,c2; 										// define and initialize
		
		cout << "\n c1 = " << c1.get_count();				// display
		cout << "\n c2 = " << c2.get_count();
		
		c1.inc_count();
		c2.inc_count();
		c2.inc_count();
		
		cout << "\n c1 = " << c1.get_count();				// display
		cout << "\n c2 = " << c2.get_count();
		
		cout << endl;
		return 0;
	}
