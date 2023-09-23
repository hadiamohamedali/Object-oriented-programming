//Unary Operator Overloading
#include <iostream>
using namespace std;
class unary{
private:
    int x , y;
public:
    unary(int i = 0 , int j = 0) //...Parameterized Constructor
    {
        x = i; y = j;
    }
    void show()
    {
       cout << x << " " << y << endl;
    }
    unary operator++() //Method 1
    {
        x++;
        y++;
        return *this;
    }
    unary operator -()
    {
        x = -x;
        y = -y;
        return *this;
    }
    bool operator!()
    {
        return (x == 0 && y == 0);
    }
    unary operator += (unary b2)
    {
        x += b2.x;
        y += b2.y;
        return *this;
    }
};
class unary2{
private:
    int x2 , y2;
public:
    unary2(int i2 = 0 , int j2 = 0) //...Parameterized Constructor
    {
        x2 = i2; y2 = j2;
    }
    void show2()
    {
       cout << x2 << " " << y2 << endl;
    }
    unary2 operator++(int) //Method 2
    {
        x2++;
        y2++;
        return *this;
    }
};
class unary3{
private:
    int x3 , y3;
public:
    unary3 (int i3 = 0 , int j3 = 0) //...Parameterized Constructor
    {
        x3 = i3; y3 = j3;
    }
    void show3()
    {
       cout << x3 << " " << y3 << endl;
    }
    unary3 operator++(int) //Method 3
    {
       unary3 t;
       t = *this;
       x3++;
       y3++;
       return t;
    }
};
int main()
{
    //Unary 1 prefix
    unary v(10 , 20);
    v.show();
    //Operator -
    unary g(-1 ,  2);
    -g;
    g.show();
    //Operator boolean !
    unary x(1 , 1);
    if(!x)
    {
      cout << "True" << endl;
    }
    else
    {
      cout << "False" << endl;
    }
    //Operator +=
    unary b(1 , 2) , b2(3 , 3);
    b += b2;
    b.show();
cout << "===============================================================" << endl;
     //Unary 2 postfix
     unary2 v2(100 , 200) , k;
     k = v2++;
     k.show2();
cout << "--------------------" << endl;
     unary3 v3(1000 , 2000) , k2;
     v3++;
     k2 = v3++;
     k2.show3();
     v3.show3();




    return 0;
}
