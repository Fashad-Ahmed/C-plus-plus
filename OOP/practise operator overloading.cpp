# include <iostream>
using namespace std;

class aclass
{
	private:
		int count;
	public:
		aclass() : count(0)
		{ }
		
		void showData()
		{
			cout << count << endl;
		}
		
		aclass operator ++ (int)
		{
			++count;
			return aclass(count);
				}		
		aclass operator ++(int)
		{
			count ++;
			return aclass(count);
		 } 
		aclass operator += (int)
		{
			count += x;
			return aclass(count);

		}
		aclass operator -- (int)
		{
			count --;
			return aclass(count);
		}
		aclass operator -= (int)
		{
			count -= n;
			return aclass(count);
			
		}
};

int main()
{
	aclass p1;
	
//	++p1; 		// 1
	p1 += 50 ;	//51
	--p1; 		// 50
	p1++;		//51
	p1 -= 50;		// 1
	
	cout << "\t" << p1.showData() << endl;
	return 0; 
	
	
}
