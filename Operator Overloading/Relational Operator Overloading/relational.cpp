//Relational Operator Overloading  // == || => <= < > !=
//Overloaded operator function usually returns an object of the
//an overloaded relational operator typically returns a true of false value..
#include <iostream>
using namespace std;
class relational{
private:
    int x , y , z;
public:
    relational()
    {
        x = y = z = 0;
    }
    relational(int i , int j , int k)
    {
        x = i;
        y = j;
        z = k;
    }
    int operator==(relational b)
    {
        if(x == b.x && y == b.y && z == b.z)
        {
            return true;
        }
        else
        {
            return false;
        }
    }


};

int main()
{
    relational a(10 , 10 , 10) , b(10 , 10 , 10);
    if(a == b) // if (a.operator == (b) )
    {
        cout << "...The Two Objects Are Equal..." << endl;
    }
    else
    {
        cout << "...The Two Objects Are Not Equal..." << endl;
    }
    return 0;
}
