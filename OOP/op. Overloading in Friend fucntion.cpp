// using friend fucntion with operator overloading
// one more argument would be added up
////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////  BINARY OP. OVERLOADING/////////////////////////////////////////
//#include <iostream>
//using namespace std;
//
//class com
//{
//	private:
//		int a,b;
//	public:
//		void set(int x,int y)
//		{
//			a = x;
//			b = y;
//		}
//		void show()
//		{
//			cout << "\na = " << a << "\nb = " << b << endl;
//		}
//		
//		friend com operator+(com,com);
//	
//};
//
//com operator+(com X,com Y)
//	{
//			com temp;
//			temp.a = X.a + Y.a;
//			temp.b = X.b + Y.b;
//			return(temp);
//	}
//		
//int main()
//{
//	com c1,c2,c3;
//	c1.set(5,1);
//	c2.set(3,4);
//	c3 = c1 + c2 ; // now --->> 
//	c3.show();
//	return 0;
//}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////  UNARY OP. OVERLOADING/////////////////////////////////////////