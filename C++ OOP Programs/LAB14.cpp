#include <iostream>
using namespace std;

class Lecturer
{
	protected:
		string Feedback;
	
	public:
		void take_feedback()
		{
			cout << "\n FEEDBACK RECORDED \n Thank you for your feedback" << endl;
		}
};

class Student
{
	protected:
		string Student_id;
		string Student_name;
		string Discipline;
	
	public:
		void info()
		{
			cout << "\n enter student id: " << endl;
			fflush(stdin);
			getline(cin,Student_id);
			fflush(stdin);		
			cout << "\n enter student name: " << endl;
			fflush(stdin);
			getline(cin,Student_name);
			fflush(stdin);			
			cout << "\n enter discipline: " << endl;
			fflush(stdin);
			getline(cin,Discipline);
			fflush(stdin);				
			
			cout << "\n Name: " << Student_name << endl;
			cout << "\n ID: " << Student_id << endl;
			cout << "\n Discipline: " << Discipline << endl;
		}
		
		
		virtual void go_to_next_class( ) = 0;
};

class RegularStudents : public Student
{
	public:
		void go_to_next_class( )
		{
			cout << "\n You may move to next class!" << endl;
		}
};

class PostGradStudents : public Student
{
	private:
		Lecturer l1;
		string Feedback007;
		
	public:
		void go_to_next_class( )
		{
			l1.take_feedback();
			cout << "\n You may move to next class!" << endl;
		}
};

int main()
{
	RegularStudents r1;
	PostGradStudents p1;
	
//	cout << "\n REGULAR STUDENTS " << endl;
	r1.info();
	r1.go_to_next_class( );
//	cout << "\n POST-GRADUATE STUDENTS " << endl;
	p1.info();
	p1.go_to_next_class( );
		
	return 0;
}
