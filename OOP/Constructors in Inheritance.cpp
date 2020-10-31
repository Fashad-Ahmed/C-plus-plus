#include <iostream>
using namespace std;

class base
{
	protected:
		int count;
		
	public:
		base() : count(0)
		{ cout<<"It's Default argument constructor for base class" << endl; }
		
		base (int n) : count (n)
		{cout<<"It's One' argument constructor for base class" << endl;}
		
		int get_count() const
		{
			return count;
		}
		
		base operator ++ ()
		{
			return base(++count);
		}
	
};

class derived : public base
{
	public:
		derived() : base()												// contructors in inheritance
		{ cout<<"It's Default argument constructor for  class" << endl; }

		derived (int n) : base (n)
		{cout<<"It's One' argument constructor for derived class" << endl;}

		
		derived operator -- ()
		{
			return derived(--count);
		}
};


int main()
{
	derived d1;
	derived d2(1000);
	
	cout << d1.get_count() << endl;
	cout << d2.get_count() << endl;
	
	++d1;
	++d2;
	
	cout << d1.get_count() << endl;
	cout << d2.get_count() << endl;
	
	--d1;
	--d2;
	
	cout << d1.get_count() << endl;
	cout << d2.get_count() << endl;
	
	derived d3 = --d2;

	cout << d2.get_count() << endl;
	cout << d3.get_count() << endl;
	
	
	cout << endl;
	return 0;
	
}



