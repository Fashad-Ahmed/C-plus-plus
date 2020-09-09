// use overriding functions
#include <iostream>
using namespace std;

class publication
{
	protected:
		string title;
		float price;
	
	public:
		void getdata()
		{
			cout << "\nEnter Name of Publication : " << endl;
			getline(cin,title);
			cin.ignore();
			cout << endl;
			cout << "Enter it's price : " << endl;cin >> price;
		}
		void putdata()
		{
			cout << "\n Name : " << title << endl;
			cout << "\n Price : " << price << endl;
		}
};

class book : public publication
{
	private:
		int pagecount;
	
	public:
		void getdata()
		{
			publication :: getdata();
			cout << "Mention number of pages : " << endl;cin >> pagecount;
		}		
		void putdata()
		{
			publication :: putdata();
			cout << "\n Number of pages : " << pagecount << " pages" << endl;
		}
};

class tape : public publication
{
	private:
		float timeMinutes;
	
	public:

	void getdata()
		{
			publication :: getdata();
			cout << "Mention playing time in minutes : " << endl;cin >> timeMinutes;
		}		
		void putdata()
		{
			publication :: putdata();
			cout << "\n Playback time : " << timeMinutes << " minutes" << endl;
		}		
	
};

int main()
{
	book b1;
	b1.getdata();
	b1.putdata();
	
	tape t1;
	t1.getdata();
	t1.putdata();
	
	cout << endl;
	return 0;
}
