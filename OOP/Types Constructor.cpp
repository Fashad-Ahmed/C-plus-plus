//#include <iostream>
//using namespace std;
//
//class Distance
//	{
//		private:
//			int feet;
//			float inches;
//			
//		public:
//			Distance()
//				{
//																	// default const. feet and inches initialized to 0 first
//					feet = 0;
//					inches = 0.0;
//				}
//			
//			Distance(int ft,float in)
//				{
//					feet = ft;
//					inches = in;
//				}
//       			 
//			void getdist()
//				{
//					cout << "\nenter feet : "  ; 
//					cin >> feet;
//					cout << "\nenter inches : "  ;
//					cin >> inches;
//					cout << endl;
//				}
//				
//			void show_dist()
//				{
//					cout << " feet is : " << feet << " and inches is : " << inches << endl;
//				}
//				
//	};
//	
//int main()
//	{
//		Distance dist1;						// default constructor
//		Distance dist2(11,6.25);				// multi-argument constructor
//		Distance dist3(dist2);						// copy constructor 1st way
//		Distance dist4 = dist3;						// copy constructor 2nd way
//		
//		dist1.getdist();
//		cout << "\n dist1  ---- >  " ; dist1.show_dist();
//		
//		cout << "\n dist2  ---- >  " ; dist2.show_dist();
//		
//		cout << "\n dist3  ---- >  " ; dist3.show_dist();
//		
//		cout << "\n dist1  ---- >  " ; dist4.show_dist();
//		
//		cout << endl;
//		return 0;
//		
//	}

#include <iostream>
using namespace std;

class College
{
	protected:
              string city;
			  string name;
			  unsigned int count;
	public:
             College():count(0)
			 {}		
			 int getcount()
			 {  count ++;
			 }
			 int setcount()
			 {   return count;
			 }
	         void setdata()
			 {
			 	cout<<"Enter college name=";
			 	cin>>name;
			 	cout<<"Enter city name=";
			 	cin>>city;
		   	 }		 
			 void putdata()
			 {
			 	cout<<"College name is"<<" "<<name;
			 	cout<<endl;
				 cout<<"City name is"<<" "<<city;
				cout<<endl;					 }						
									 		     
};

class Department:public College
{
	private:
		   string dname;
	public:
		   	void setdata()
			{
            College::setdata(); 			
			cout<<"Enter department name=";
			cin>>dname;
            }
            void putdata()
			{
				College::putdata();
				cout<<"Department name is"<<" "<<dname;
	            cout<<endl;		
			}           
};



class Teacher:public College
{
	private:
		   string tname;
	public:
		   	void setdata()
			{
            College::setdata(); 			
			cout<<"Enter teacher name=";
			 	cin>>tname;
                       }
            void putdata()
			{
				College::putdata();
				cout<<"Teacher name is"<<" "<<tname;
				cout<<endl;
			}           
};

int main()
{
	College c1;
	cout<<"\nc1="<<c1.setcount();
	c1.setcount();
	c1.setcount();
	cout<<"\nc1="<<c1.setcount();
	cout<<endl;
	Department d1;
	Teacher t1;
	d1.setdata();
	t1.setdata();
	cout<<"\nc1="<<c1.setcount();
	cout<<"\nInformation"<<endl;d1.putdata();
	cout<<"Information"<<endl;t1.putdata();
	return 0;
	
}
