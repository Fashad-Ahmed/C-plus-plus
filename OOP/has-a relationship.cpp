#include <iostream>

using namespace std;

class staff{

	private:

		int empid;

		string empname;

	public:

		void getdata(){

			cout<<"enter the id of employee of the year";

			cin>>empid;

			cout<<"enter the name of the employee of the year";

			cin>>empname;

	}

	

		void display(){

			cout<<"employee id is "<<empid<<endl;

			cout<<"The employee of the year for this library is "<<empname<<endl;

		}	

};

class publications{

	private:

		string publication;

		string bookname;

		string authorname;

	public:	void getdata(){

			cout<<"enter publication of the most issued book of the year in this library";

			cin>>publication;

			cout<<"enter the book name";

			cin>>bookname;

			cout<<"enter the name of its author";

			cin>>authorname;

	}

	

		void display(){

			cout<<"publication is "<<publication<<endl;

			cout<<"The most issued book of this library is "<<bookname<<endl;

			cout<<"The author name is "<<authorname<<endl;




		}	

		

};

class library{

	private:

		char dateofestablishment[30];

		int totalnumofbooks;

		string location;

		staff s1;

		publications p1;

		

	public:

		void getdata(){

			cout<<"enter the date of establisment of the library";

			cin>>dateofestablishment;

			cout<<"enter total num of books";

			cin>>totalnumofbooks;

			cout<<"enter location of library";

			cin>>location;

			p1.getdata();

			s1.getdata();}

		void display(){

			cout<<"the date of establishment is"<<dateofestablishment<<endl;

			cout<<"the total num of books is"<<totalnumofbooks<<endl;

			cout<<"address of library is"<<location<<endl;

			p1.display();

			s1.display();

			}

		

};

int main(){

	library*ptr[3];

for (int n=0;n<=2;n++)

{

	ptr[n]=new library;

	ptr[n]->getdata();

	ptr [n]->display();

}

return 0;

}

