//// this variable  gives the no. of vowels in a word or sentence
//// var
//// input and output member function
//
//#include <iostream>
//#include <string.h>
//
//using namespace std;
//
//class vowel
//	{
//		private:
//			
//			static int all;
//			char inp[111];
//		
//		public:
//			
//			void getInput()
//			
//				{
//					cout << "enter a string data-type : " << endl;
//					cin >> inp;
//				}
//			
//			void Outget()
//				{
//					for (int w=0 ; w < strlen(inp) ; w++)							//	inp[w]!='\0'
//						
//						{
//							if (w == 'a'|| w == 'e' || w == 'i' || w ==  'o' || w ==  'u' ||  w == 'A' || w == 'E'|| w == 'I' || w == 'O' || w == 'U' )
//								
//								{
//									all++;
//								}
//						}
//						
//					cout << "\n Number Of vowels :  " << all << endl;
//					
//				}
//	};
//
//int vowel :: all;
//
//int main()
//{
//	
//	vowel v1;
//	vowel v2('FCB');
//	
//	v1.getInput();								// taking input string
//	
//	cout << "object v1 ----> \t " << v1.Outget() << endl;
//	cout<< "object v2 -----> \t"  << v2.Outget() << endl;
//	
//	cout << endl;
//	return 0;
//	
//}
#include <iostream>
#include <string.h>

using namespace std;

class vowel
	{
		private:
			
			int all = 0;
			char inp[50];
		
		public:
			
			void getInput()
			
				{
					cout << "enter a string data-type : " << endl;
					cin >> inp;
				}
			
			void Outget()
				{
					for (int w=0 ; w < strlen(inp) ; w++)							//	inp[w]!='\0'
						
						{
							if ( inp[w] == 'a' )
								
								{
									all++;
								}
						}
						
					cout << "\n Number Of vowels :  " << all << endl;
					
				}
	};

//int vowel :: all;

int main()
{
	
	vowel v1;
	vowel v2();
	
	v1.getInput();								// taking input string
	
	cout << "object v1 ---->: \t ";
	v1.Outget();
//	cout<< "object v2 -----> \t"  << v2.Outget() << endl;
	
//	cout << endl;
	return 0;
	
}
