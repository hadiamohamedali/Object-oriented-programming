//Operator Overloading - input / output / int /[]
#include <iostream>
using namespace std;
//Example 1
class Distance
{
private:
    int feet;
    int inches;
public:
    //Empty Constructor
    Distance()
    {
        feet = 0;
        inches = 0;
    }
    Distance(int f , int i)
    {
        feet = f;
        inches = i;
    }
    friend istream& operator >> (istream &input , Distance &d)
    {
       input >> d.feet >> d.inches;
       return input;
    }
    friend ostream& operator << (ostream &output , Distance &d)
    {
      output << "Feet: " << d.feet <<"   "<< "Inches: " << d.inches << endl;
      return output;
    }
};
//Example 2
class Number{
private:
    int num;
public:
    //...Empty Constructor
    Number()
    {
        num = 0;
    }
    //...Parameterized Constructor
    Number(int x)
    {
        num = x;
    }
    //...Copy Constructor
    Number(const Number &ob)
    {
        num = ob.num;
    }
    int getNum()
    {
        return num;
    }
    operator int()
    {
        return (int)num;
    }
};
//Example 3
class Arr{
private:
    int a[3];
public:
    Arr()
    {
      for(int i = 0; i < 3; i++)
      {
          a[i] = i + 2;
      }
    }
    int&operator[] (int in)
    {
        return a[in];
    }
};
int main()
{   //Example 1
    Distance D1(1 , 2) , D2(3 , 4) , D3;
    cin >> D3;
    cout << D3 << endl;
cout << "=========================================================" << endl;
    //Example 2
    Number ob(20);
    int x = 10;
    x = ob;
    cout << x << endl; // x = 20
cout << "=========================================================" << endl;
    //Example 3
    Arr ob1;
    cout << ob1[2] << endl;
    ob1[2] = 20;
    cout << ob1[2] << endl;
    return 0;
}
