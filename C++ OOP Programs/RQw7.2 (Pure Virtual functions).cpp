// Review Question Lecture 7.2
#include <iostream>
using namespace std;

class shape
{
	protected:
		double height;
		double base;
	
	public:
		void get_data()
		{
			cout << "\n Enter height/length : " << endl;cin >> height;
			cout << "\n Enter base/width : " << endl;cin >> base;
		}
		virtual void display_area() = 0;
		
};

class triangle : public shape
{
	public:
		void get_data()
		{
			cout << "\n TRIANGLE" << endl;
			shape :: get_data();
		}
		void display_area()
		{
			cout << "\n With Parameters :  height = " << height << " , base = " << base << endl;
			cout << "\n The Area of Triangle = " << (0.5 * (height * base)) << " units" << endl;
		}
};

class rectangle : public shape
{
	public:
		void get_data()
		{
			cout << "\n RECTANGLE" << endl;
			shape :: get_data();
				
		}
		void display_area()
		{
			cout << "\n With Parameters :  length = " << height << " , width = " << base << endl;
			cout << "\n The Area of Rectangle = " <<  (height * base)  << " units"<< endl;		
		}
	
};

int main()
{
	triangle t1;
	rectangle r1;
	
	shape*ptr[10];
	
//	t1.get_data();
	ptr[0] = &t1;
	ptr[0] -> get_data();
	ptr[0] -> display_area();
	
	ptr[1] = &r1;
	ptr[1] -> get_data();
	ptr[1] -> display_area();
	
	cout << endl;
	return 0;
	
}
//#include <iostream>
//using namespace std;
//
//class shape
//{
//    protected:
//        double length, width;
//    public:
//        virtual void get_data()
//        {
//            cout << "Enter length/base: "; cin >> length;
//            cout << "Enter height/width: "; cin >> width;
//        }
//
//        virtual void display_area() = 0;
//};
//
//class triangle : public shape
//{
//    public: 
//        void get_data()
//        {
//            cout << "-----For Triangle-----" << endl;
//            shape::get_data();
//        }
//
//        void display_area()
//        {
//            cout << "The area of triangle with height= " << width << " and base= " << length << " is= "
//                 << (length*width)/2 << endl;
//        }
//};
//
//class rectangle : public shape
//{
//    public: 
//        void get_data()
//        {
//            cout << "-----For Rectangle-----" << endl;
//            shape::get_data();
//        }
//        void display_area()
//        {
//            cout << "The area of rectangle with width= " << width << " and length= " << length << " is= "
//                 << length*width << endl;
//        }
//};
//
//int main()
//{
//    triangle t1;
//    rectangle r1;
//    shape* arr[2];
//    arr[0] = &t1;
//    arr[1] = &r1;
//
//    arr[0]->get_data();
//    arr[0]->display_area();
//
//    arr[1]->get_data();
//    arr[1]->display_area();
//
//    return 0;
//}
