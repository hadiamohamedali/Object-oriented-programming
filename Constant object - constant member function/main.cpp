#include <iostream>
#include <bits/stdc++.h>
using namespace std;
class timee
{
private:
    int h , m , s;
public:
    //constant function
    void print() const  //---> constant is right from data type of function
    {
      cout << "The Time: " << h << ":" << m << ":" << s << endl;
    }
    timee(int i , int j , int k)
    {   cout << "...Object Created..." << endl;
        h = i;
        m = j;
        s = k;
    }
};
// constant object ---->> constant function
// Not Constant object ---->> All Functions but Not Constant Functions
int main()
{
   const timee ob(12 , 00 , 00); // constant object
    ob.print();


    return 0;
}
