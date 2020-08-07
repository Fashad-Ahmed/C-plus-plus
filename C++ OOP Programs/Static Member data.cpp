
#include <iostream>
using namespace std;

class foo
	{
		private:
//			int count;
			static int count;				// declararation
		
		public:
			
			foo()
			{ count++; }
			
			int getcount()
			{ return count;}
	};
	
int foo :: count = 0;			// definition of count

int main()
	{
		foo f1,f2,f3;
		cout << "count : " << f1.getcount() << endl;
		cout << "count : " << f2.getcount() << endl;
		cout << "count : " << f3.getcount() << endl;
		return 0;
	}
