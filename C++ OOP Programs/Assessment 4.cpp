#include <iostream>
using namespace std;

class College
{
	protected:
		string name;
		string city;
		int user;
		int total;	
	
	public:

		College() : total(0)
		{ }
		
		void doing_total()
		{
			total = (++total) + 1;
		}
		int get_total()
		{
			return total;
		}
		 
		College (int n) : user(n)
		{ }
		
		void take_input()
		{
			cout << "\n Enter Name of College : " << endl;
			getline(cin,name);
			cout << "\n Enter Name of City : " << endl;
			getline(cin,city);
		}
		
		void display() const
		{
			cout << "\n Name Of College : " << name << endl;
			cout << "\n Name of City : " << city << endl;
			
		}
};

class Department : public College
{
	private:
		string depart_name;
	public:
		Department(int n) : College(n)
		{ }
		
		void take_input()
		{
			College :: take_input();
			cout << "\n Enter Department Name : " << endl;
			getline(cin,depart_name);
		}
		void display() const
		{
			College :: display();
			cout << "\n Department : " << depart_name << endl;
			cout << "\n Department Closing Percentage : " << user << " % " << endl;
		}
		
	
};


class Teacher : public College
{
	private:
		string teacher_name;
	public:
		Teacher(int n) : College(n)
		{ }
		
		void take_input()
		{
			College :: take_input();
			cout << "\n Enter Name of Teacher : " << endl;
			getline(cin,teacher_name);
		}
		void display() const
		{
			College :: display();
			cout << "\n Name of Teacher : " << teacher_name << endl;
			cout << "\n Portal ID : " << user << endl;

		}
};


int main()
{
	Teacher t1(2236);
	Department d1(82);

	t1.doing_total();
	cout << "\n USER NUMBER : " << t1.get_total() << endl;	
	t1.take_input();
	cout << "\n USER NUMBER " << t1.get_total() << " DATA " << endl;	
	t1.display();
	cout << endl;

	d1.doing_total();
	cout << "\n USER NUMBER : " << d1.get_total() << endl;	
	d1.take_input();
	cout << "\n USER NUMBER " << d1.get_total() << " DATA " << endl;	
	d1.display();

	cout << endl;
	return 0;
}
