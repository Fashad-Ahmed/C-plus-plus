//class your_class_name
//	{
//		access_specifier:			//   ( public,private,protected)
//				data_members;			// private
//		access_specifier:
//				memeber_functions();			//	public
//	};

#include <iostream>
using namespace std;

class smallobj					// declare a class
{
	private:
		int somedata;			// class data
		
	public:
		void setdata(int d)			// member function to set data
			{
				somedata = d;
			}
		void showdata()				// memeber func to show data
			{
				cout << "data is ! " << somedata << endl;
			}
};

int main()				// void main()
{
	smallobj s1,s2;			// define two objects of class smallobj
	s1.setdata(1066);		// call memeber func to set data
	s2.setdata(1788);
	s1.showdata();
	s2.showdata();
	
}
