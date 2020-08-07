# include <iostream>
using namespace std;

class com
{
	private:
		int x;
	public:
		void setData(int a)
		{
			x = a;
		}
		void showData()
		{
			cout << x << endl;
		}
		
		com operator ++ ()
		{
			com temp;
			temp.x =  ++x;
			return temp;
		}
		
		
};

int main()
{
	com c1,c2;
	c1.setData(5);
	c1.showData();
	c2 = ++c1;							// pr-fix operator
	c1.showData();
	c2.showData();
	
	return 0;
	
}

// for post add int argument 
