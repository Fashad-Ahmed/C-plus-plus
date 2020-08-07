0#include <iostream>
using namespace std;

class counter
	{
		private:
			unsigned int count;
			
		public:
			counter() : count(0)
				{ }
			
			unsigned int get_count()
				{
					return count;
				}
			
			void operator ++ ()
				{
					++count;
				}
	};
	
int main()
{	
	counter c1,c2;
	
	cout << c1.get_count() << endl;
	cout << c2.get_count() << endl;
	
	++c1;
	++c2;
	++c2;
	
	cout << c1.get_count() << endl;
	cout << c2.get_count() << endl;
	
	return 0;
}



/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



//#include <iostream>
//using namespace std;
//
//class counter
//	{
//		private:
//			unsigned int count;
//			
//		public:
//			counter() : count(0)
//				{ }
//			
//			unsigned int get_count()
//				{
//					return count;
//				}
//			
//			void operator ++ ()
//				{
//					count++;
//				}
//	};
//	
//int main()
//{	
//	counter c1,c2;
//	
//	cout << c1.get_count() << endl;
//	cout << c2.get_count() << endl;
//	
//	
//	c1++;		//  E:\C++\Operator Overloading.cpp	[Error] no 'operator++(int)' declared for postfix '++' [-fpermissive]
//	c2++;
//	c2++;
//	
//	cout << c1.get_count() << endl;
//	cout << c2.get_count() << endl;
//	
//	return 0;
//}


/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



//#include <iostream>
//using namespace std;

//class counter
//	{
//		private:
//			unsigned int count;
//			
//		public:
//			counter() : count(1000)
//				{ }
//			
//			unsigned int get_count()
//				{
//					return count;
//				}
//			
//			void operator -- ()
//				{
//					--count;
//				}
//	};
//	
//int main()
//{	
//	counter c1,c2;
//	
//	cout << c1.get_count() << endl;
//	cout << c2.get_count() << endl;
//	
//	--c1;
//	--c2;
//	--c2;
//	
//	cout << c1.get_count() << endl;
//	cout << c2.get_count() << endl;
//	
//	return 0;
//}

