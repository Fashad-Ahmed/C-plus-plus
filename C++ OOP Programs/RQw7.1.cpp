#include <iostream>
using namespace std;

class Father
{
	protected:
		int age;
	
	public:
		Father(int n) : age(n)
		{ }
		
		virtual void iam()
		{
			cout << "\n I AM FATHER, my age is... " << age << endl;
		}
};

class son : public Father
{
	public:
		son(int n) : Father(n)
		{ }
		
		void iam()
		{
			cout << "\n I AM SON, my age is... " << age << endl;
		}
};

class daughter : public Father
{
	public:
		daughter(int n) : Father(n)
		{ }
		
		void iam()
		{
			cout << "\n I AM DAUGHTER, my age is... " << age << endl;
		}
};

int main()
{
	Father f(49);
	son s(20);
	daughter d1(10);
	daughter d2(26);
	
	f.iam();
	s.iam();
	d1.iam();
	d2.iam();
	
	cout << "\n \t ****** " << endl;
	
	Father*ptr[3];
	
	ptr[0] = &s;ptr[0] -> iam();
	ptr[1] = &d1;ptr[1] -> iam();
	ptr[2] = &d2;ptr[2] -> iam();

	
	return 0;
	
}


//  shape* ptrarr[100]; // array of 100 pointers to shapes
//for(int j=0; j<N; j++)
//ptrarr[j]->draw();



//implementation of Virtual Function

//#include <iostream>
//using namespace std;
//
//class father                //base class
//{
//	protected:             
//		int age;
//		
//	public:
//		
//		father(int x):age(x) //one-argument constructor
//		{
//			age=x;
//		}
//	
//		virtual void iam()  //virtual function
//		{
//			cout<<"\n I AM FATHER, my age is... "<<age<<endl;
//		}
//};
//
//class son : public father   //first derived class
//{
//	public:
//		son(int x):father(x)
//		{	}
//	
//	    void iam()
//	    {
//		    cout<<"\n I AM SON, my age is... "<<age<<endl;
//	    }
//};
//
//class daughter : public father   //second derived class
//{
//	public:
//		daughter(int x):father(x)
//		{	}
//		
//	    void iam()
//	    {
//		    cout<<"\n I AM DAUGHTER, my age is... "<<age<<endl;
//	    }
//};
//
//int main()
//{
//	father f=55;
//	son s=16;
//	daughter d=10;
//
//    cout<<"\n Output before pointer applies to base class";
//    
//	f.iam();	
//	s.iam();
//	d.iam();
//	
//	father * ptr;
//	
//	cout<<"\n Output after pointer applies to base class";
//
//	ptr=&s;
//	ptr -> iam();
//	
//	ptr=&d;
//	ptr -> iam();
//	
//	return 0;	
//}
