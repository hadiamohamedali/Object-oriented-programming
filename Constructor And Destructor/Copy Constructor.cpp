#include <iostream>
using namespace std;
// Copy Constructor
class copyconstructor
{
private:
   int a1 , a2 , a3 , a4 , a5 , a6 , a7 , a8;
public:
    copyconstructor(int aa1 ,int aa2 , int aa3 , int aa4 , int aa5 , int aa6 , int aa7 , int aa8)
    {
        a1 = aa1;
        a2 = aa2;
        a3 = aa3;
        a4 = aa4;
        a5 = aa5;
        a6 = aa6;
        a7 = aa7;
        a8 = aa8;
    }
    copyconstructor(const copyconstructor&ob)
    {
      a1 = ob.a1;
      a2 = ob.a2;
      a3 = ob.a3;
      a4 = ob.a4;
      a5 = ob.a5;
      a6 = ob.a6;
      a7 = ob.a7;
      a8 = ob.a8;
    }
    void p()
    {
     cout << a1 << " " << a2 << " " << a3 << " " << a4 << " " << a5 << " " << a6 << " " << a7 << " " << a8 << endl;
    }





};
int main()
{
    copyconstructor g(1 , 2 , 3 , 4 , 5 , 6 , 7 , 8);
    g.p();
    copyconstructor h(g);
    h.p();
    return 0;
}
