#include <iostream>
using namespace std;

class department
{
	private:
		string departName;
	public:
		void getData()
		{
			cout << "\n Enter department : " << endl;
			getline(cin,departName);
		}
		void showData()
		{
			cout << "\n Department : " << endl;
		}
};

class courses
{
	private:
		string course_code;
		string course_name;
	public:
		void getData()
		{
			cout << "\n Enter course code : " << endl;
			getline(cin,course_code);
			cout << "\n Enter course name : " << endl;
			getline(cin,course_name);		
		}
		void showData()
		{
			cout << "\n Course Code : " << course_code << endl;
			cout << "\n Course Name : " << course_name << endl;
		}
};

class student
{
	private:
		string stud_id;
		string stud_name;
		department d1;
		courses c1;
		
	public:
		void getData()
		{
			cout << "\n Enter student id : " << endl;
			getline(cin,stud_id);
			cout << "\n Enter student name : " << endl;
			getline(cin,stud_name);	
			d1.getData();
			c1.getData();	
		}
		void showData()
		{
			cout << "\n Stuent ID : " << stud_id << endl;
			cout << "\n Student Name : " << stud_name << endl;
			d1.showData();
			c1.showData();
		}
};

class instructor
{
	private:
		string emp_id;
		string emp_name;
		string dob;
		department d1;
		courses c1;
		
	public:
		void getData()
		{
			cout << "\n Enter Instructor's id : " << endl;
			getline(cin,emp_id);
			cout << "\n Enter Instructor name : " << endl;
			getline(cin,emp_name);
			cout << "\n Enter date of birth : " << endl;
			getline(cin,dob);	
			d1.getData();
			c1.getData();	
		}
		void showData()
		{
			cout << "\n Instructor ID : " << emp_id << endl;
			cout << "\n Instructor Name : " << emp_name << endl;
			cout << "\n Date of Birth : " << dob << endl;
			d1.showData();
			c1.showData();
		}
};

int main()
{
	student*ptr1 [100];
	instructor*ptr2 [100];
	int x = 0;
	string choice;
	int ss = 0;
	int ii = 0;
	
	do{
		cout << "enter S OR I : " << endl;
		getline(cin,choice);
		
		if ( choice == "S"){
			ptr1[x] = new student;
			ptr1[x] -> getData();
			ptr1[x] -> showData();
			ss++;
		}
		else if ( choice == "I"){
			ptr2[x] = new instructor;
			ptr2[x] -> getData();
			ptr2[x] -> showData();
			ii++;
		}
		
		cout << "\nwanna continue press Y otherwise N " << endl;
		getline(cin,choice);		
	}
	while ( choice == "Y");
	return 0;
	
}
