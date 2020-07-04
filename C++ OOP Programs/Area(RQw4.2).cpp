
#include <iostream>
using namespace std;

class Circle
	{
		private:
			
				float radius;
				unsigned int age;
			
			
		public:
			Circle()
				{
					age = 0;
					cout << "Default, " ;		
					cout << "\nThe age : " << age << endl;										// arg one
				}
				
			Circle(int a)
				{
					age = a;
					cout << "Single argument";
					cout << "\nThe age : " << age << endl;										// arg one
				}
				
			Circle(float r,int a)
				{
					radius = r;
					age = a;
					cout << "multiple argument";
					cout << "\nThe age : " << age << endl;										// arg one
					cout << "\nThe Radius : " << radius << endl;
					
				}
				
			void get_rad()
				{
					
					cout << "\n ENTER RADIUS : " << endl;
					cin >> radius;
					
					cout << "\n Enter age : " << endl;
					cin >> age;
						
				}
			
			void show_rad()
				{
					
					cout << "\n THE AREA OF CIRCLE IS : " << (3.142 * (radius * radius)) << endl;
					cout << "\n THE CICUMFERENCE OF CIRCLE IS : " << (2 * 3.142 * radius) << endl;
					
				}
				
	};
	
int main()
	{
		Circle c1;
		Circle c2(5);
		Circle c22;				// single input    
		Circle c3(3.8,6);
		Circle c33;		
		Circle c4 = c3;
		
		cout << "\nc1 ----------> "; c1.show_rad();
		
		cout << "\nc2 ----------> "; c2.show_rad();
		
		c22.get_rad();
		cout << "\nc22 ----------> "; c22.show_rad();
		
		cout << "\nc3 ------------> "; c3.show_rad();
		
		c33.get_rad();
		cout << "\nc33 ------------> "; c33.show_rad();
		
		cout << "\nc4 -------------> "; c4.show_rad();
		
		cout << endl;
		return 0;
		
	}
	
	
//	n1 def
//	n2 single
//	n3 multi ---- > input
//	n4 and n5 copy constr. method both
// n6 multi ------  > self
