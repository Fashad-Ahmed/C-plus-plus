#include <iostream> 
using namespace std;

class club
{
	private:
		int market;
		int players;
	public:
//		void setdata1(int a){
//			market = a;
//		}
		void setdata2(int b){
			players = b;
		}
		void showdata(){
			cout << "no. players are  " << players << endl;
		}
//		void showdata1(){
//			cout << " of market value " << market << " $ " << endl;
//		}
};

int main()
{
	club c1,c2;
//	c1.setdata1(10);
//	c1.setdata1(101);
	c2.setdata2(55);
	c2.setdata2(505);
	c1.showdata();
//	c2.showdata1();
}
