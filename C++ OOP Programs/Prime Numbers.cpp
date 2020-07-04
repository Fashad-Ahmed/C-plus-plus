#include <iostream>
using namespace std;
#include <process.h>				// for exit()

int main()
{
	unsigned long a,b;
	
	cout << "Enter a Number :  "; cin >> a;
	
	for(b=2; b<=a/2; b++)
		if (a%b == 0){
			
			cout << "its not a  prime number";
			exit(0);
		}
		
	cout << "its a Prime Number";
	return 0 ;
	
}



//	Library Function exit()
//	When PRIME discovers that a number is not prime, it exits immediately, since there’s no use
//	proving more than once that a number isn’t prime. This is accomplished with the library function exit().
//	This function causes the program to terminate, no matter where it is in the listing.
//	It has no return value. Its single argument, 0 in our example, is returned to the operating system when the program exits.
//	(This value is useful in batch files, where you can use the ERRORLEVEL value to query the return value provided by exit().
//	The value 0 is normally used for a successful termination; other numbers indicate errors.)
