#include <iostream>
using namespace std;

class student
{
	private:
		
		char name[30];
		char id[30];
		static int total;
		
	public:
		
		student()
			{
				total++;
			}
		
		static int gettotal()		// static member function
			
		{
			return total;
		}
		
		void input_data()
			{
				cout << "student name : " << endl; cin >> name;
				cout << "id  : " << endl; cin >> id;
				
			}
		
		void display_data()
			{
				cout << "student name : " << name << endl;
				cout << "id  : " << id << endl;
			}
			
};

int student :: total = 0;

int main()
{
	student s1,s2;
	
	s1.input_data();
	s2.input_data();
	
	cout << "\nstudent 1 details : \n"  << endl;
	s1.display_data();
	cout << "\nstudent 2 details : \n" << endl;
	s2.display_data(); 

	cout << "\ntotal students : " << student :: gettotal();
	
	cout << endl;
	return 0;
}
