#include <iostream>
using namespace std;

template <class X>
X larger(X a,X b)
{
	if ( a>b )
		return a;
	else
		return b;
}

template <class X,class Y>
X larger(X a,Y b)
{
	if ( a>b )
		return a;
	else
		return b;
}

template <class X,class Y>
Y larger(X a,Y b)
{
	if ( a>b )
		return a;
	else
		return b;
}


int main(){
	cout << larger(3,9.3) << endl;
	cout << larger(3.3,6);
	
	return 0;
}
