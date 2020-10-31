#include <iostream>
using namespace std;

class dpw
	{
		private:
			int alpha;
			
		public:
			
			void ftw()
				{
					alpha = 99;
				}
			
			void confunc()
				{
					alpha = 99; // error
				}		
	};
	
int main()
{
	dpw d1;
	d1.confunc();
	d1.ftw();
	return 0;
}
