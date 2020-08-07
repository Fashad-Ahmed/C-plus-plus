
// increment counter variable with postfix operator
# include <iostream>
using namespace std;
class Counter
    {
    private:
        unsigned int count;
    public:
        Counter() : count(0)
            { }
        unsigned int get_count()
            {return count;}
        void operator++(int)
            {
            count++;
            }
    };

int main()
    {
    Counter c1, c2;
    cout << "\nc1=" << c1.get_count(); // c1=0
    cout << "\nc2=" << c2.get_count(); // c2=0

    c1++;
    c2++;
    c2++;

    cout << "\nc1=" << c1.get_count(); // c1=1
    cout << "\nc2=" << c2.get_count() << endl; // c2=2
    return 0;
    }
