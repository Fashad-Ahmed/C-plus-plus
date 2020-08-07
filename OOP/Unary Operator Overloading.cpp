# include <iostream>
using namespace std;

class com
{
	private:
		int a,b;
		
	public:
		void set(int x,int y)
		{
			a = x;
			b = y;
		}
		void show()
		{
			cout << a << "\t" << b << endl;
		}
		
		com operator-()
		{
			com temp;
			temp.a = -a;
			temp.b = -b;
			return temp;
			
		}
		
};

int main()
{
	com c1,c2;
	c1.set(5,6);
	c2 =- c1;   					// c2 = c1.operator - ()
	c1.show();
	c2.show();
	
	return 0;
	
}
