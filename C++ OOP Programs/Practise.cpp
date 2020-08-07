#include <iostream>
using namespace std;

class person
{
	protected:
		char name;
	public:
		void getName()
		{
			cout << "\n enter name : " << endl;
//			getline(cin,name);
			cin >> name;	
		}
		void putName()
		{
			cout << "\n name : " << name << endl;
		}
		virtual void getData() = 0;
		virtual bool isOut() = 0;

};

class student : public person
{
	private:
		float gpa;
	public:
	void getData()
	{
		person :: getName();
		cout << "enter GPA : " << endl;cin >> gpa;
		}	
		bool isOut()
		{
			return( gpa > 3.5) ? true : false;
		}
};

class professor : public person
{
	private:
		int numPub;
	public:
		void getData()
		{
			person :: getName();
			cout << "enter name of publications : " << endl;cin >> numPub;
			}	
		bool isOut()
		{
			return( numPub > 100 ) ? true : false;	
		}
};

int main()
{
	person*ptr [100];
	int n = 0;
	char choice;
	do{
		cout << " enter s / p" << endl; // s--> student p--> professor
		cin >> choice;
		
		if( choice == 's'){
			ptr[n] = new student;
		}
		else{
			ptr[n] = new professor;
		}
		ptr[n++] -> getData();
		
		cout <<"enter another ( y / n)  : " << endl;
		cin >> choice;
		}while( choice == 'y');
		
		for(int j=0; j<n ; j++){
			ptr[j] -> getName();
			if ( ptr[j] -> isOut()){
				cout << "\nOUTSTANDING\n";
			}
		}
	
	return 0;
}
