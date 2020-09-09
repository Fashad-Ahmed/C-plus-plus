//#include <iostream>
//using namespace std;
//
//class word
//{
//	private:
//		char a[30];
//		char b[30];
//	public:
//		void set(char a[30])
//		{
//			a = a[30];
//			
//		}
//		void set2(char b[30]){
//			 b = b[30];
//		}
//		
//		void showdata()
//		{
//			cout << a << "\t" << b << endl; 
//		}
//		
//		word add(word q)
//		{
//			word temp;
//			temp.a = a + q.a;
//			temp.b = b + q.b;
//			return temp;
//			}	
//		
//};
//
//void main()
//{
//	word w1,w2,w3;
//	w1.set('fashad');
//	w2.set('ahmed');
//	
//	w3 = w1.add(w2);
//	
//	w3.showdata();
//	
//	getch();
//	
//		
//	
//}

//#include<iostream>  
//#include<conio.h>  
//using namespace std; 
//
//class String  
//{  
//    char str[20]; //member variable for string input  
//public:  
//    void input() //member function  
//    {  
//        cout<<"Enter your string: ";  
//        cin.getline(str,20);  
//    }  
//    void display() //member function for output  
//    {  
//        cout<<"String: "<<str;  
//    }  
//    String operator+(String s) //overloading   
//    {  
//        String obj;  
//        strcat(str,s.str);  
//        strcpy(obj.str,str);  
//        return obj;  
//    }  
//};  
//void main()  
//{  
//    String str1,str2,str3; //creating three object  
//    str1.input();  
//    str2.input();  
//    str3=str1+str2;  
//    str3.display(); //displaying  
//    getch();  
//}   
// 2 a
//#include <iostream>
//using namespace std;
//
//class word
//{
//	private:
//		char a[300];
////		char b[30];		
//	
//	public:
//		void getInput()
//			{
//				cout << "enter a string : " << endl;cin >> a; 
//			}
//			
//		void show()
//			{
//				cout << "String: " << a << endl;
//			}
//			
//		word operator + (word a)
//		{
//			word temp;
//			temp.a = a;
//			return temp;
//		}
//};
//
//int main()
//{
//	word w1,w2,w3;
//	
//	w1.getInput();
//	w2.getInput();
//	
//	w3 = w1 + w2;
//	w3.show();
//	
//	cout << endl;
//	return 0;
//}

#include <iostream>
using namespace std;

class conc
{
    private:
        string str;
    public:
//        conc() : str("")
//        {   }
        conc(string x) : str(x)
        {   }
        conc operator + (conc y)
        {
            string ans = str + " " + y.str;
            return conc(ans);
        }
        string get_ans()
        {return str;}


};

int main()
{
    conc s1("basket");
	conc s2("ball");
    conc s3 = s1 + s2;
    cout << s3.get_ans() << endl;

   
    return 0;
}
