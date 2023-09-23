//Friend Function And Friend classes
#include <iostream>
using namespace std;
//practice 1
class myclass{
private:
    int x , y;
public:
    myclass(int a , int b) // parameterized constructor
    {
        cout << "...Parameterized Constructor..." << endl;
        x = a;
        y = b;
    }
    friend int sum (myclass ob); // Friend Function
};
int sum(myclass ob)
{
    return ob.x + ob.y;
}

///////////////////////////////////////////////////////////
//practice 2
class CRectangle{
private:
    int width , height;
    friend CRectangle duplicate(CRectangle R); //Friend Class
public:
    void set_values(int , int);
    int area()
    {
        return (width * height);
    }
}; // End Class CRectangle Def..
void CRectangle :: set_values(int x , int y)
{
    width = x;
    height = y;
}
CRectangle duplicate(CRectangle R)
{
    CRectangle T;
    T.width = R.width * 2;
    T.height = R.height * 2;
    return T;
}

/////////////////////////////////////////
//practice 3
// sum to member from two different classes using friend
class Triangle;
class Rectangle1{
private:
    int width1 , height1;
public:
    void set_values1(int x1 , int y1)
    {
        width1 = x1;
        height1 = y1;
    }
    friend int S(Triangle T , Rectangle1 R);
};
class Triangle{
private:
    int width2 , height2;
public:
    Triangle(int x2 , int y2)
    {
      cout << "...Parameterized Constructor Triangle..." << endl;
        width2 = x2;
        height2 = y2;
    }
    friend int S(Triangle T , Rectangle1 R);
};
int S(Triangle T , Rectangle1 R) // Friend Function to more Classes
{
    return T.width2 + R.width1;
}
int main()
{
    myclass o(10 , 20);
    cout << "The Sum = " << sum(o) << endl;
cout << "====================================================" << endl;
    CRectangle rect1 , rect2;
    rect1.set_values(2 , 3);
    cout << "The Area Before Duplicate = " << rect1.area() << endl;
    rect2 = duplicate(rect1);
    cout << "The Area After Duplicate = " << rect2.area() << endl;
cout << "====================================================" << endl;
    Rectangle1 r;
    r.set_values1(3 , 4);
    Triangle t(5 , 10);
    //Result is Sum of (Triangle Width + Rectangle 1 Width)
    cout << "Result = " << S(t , r) << endl;
    return 0;
}
