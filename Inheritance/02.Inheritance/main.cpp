//02.Inheritance
/*
..Constructor And Destructor..
..operator =() member..
..friends..
*/
#include <iostream>
using namespace std;
class mother{
public:
    mother()
    {
      cout << "...Mother :: Empty Constructor..." << endl;
    }
    mother(int x)
    {
      cout << "Mother :: Parameterized Constructor = "<<x<< endl;
    }
};
class daughter : public mother{
public:
    daughter()
    {
      cout << "...Daughter :: Empty Constructor..." << endl;
    }
    daughter(int y)
    {
      cout << "...Daughter :: Parameterized Constructor = " <<y<< endl;
    }
};
class son : public mother{
public:
    son(int a) : mother(a) //inherited parameterize constructor
    {
      cout << "son :: parameterize constructor = " << a << endl;
    }
};
int main()
{
   son aseel(0);
    return 0;
}
