#include <iostream>
using namespace std;

class example
{
	public:
		int print(int a)
		{
			cout << "integar : " << a << endl;	
		}	
		int print(double b)
		{
			cout << "double : " << b;
		}
};

int main()
{
	example ap;
	ap.print(5);
	ap.print(5.55);
	return 0;
}
