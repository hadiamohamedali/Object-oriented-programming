#include <iostream>
using namespace std;
class triangle
{
private:
    float base;
    float height;
public:
    //constructor is birth of object
    //constructor is not return any value or void
    //constructor has the same name of class
    //triangle() // 1...Default constructor
    //{
        //cout << "!...Empty Constructor...!" << endl;
        //base = 0;
        //height = 0;
    //}
    triangle(float b , float h)// 2...Parameterized constructor // ====>> :base(b) ,height(h)
    {
       base = b;
       height = h;
       cout << "...Parameterized Constructor..." << endl;
    }
     //Destructor has the same name of class
    //Destructor has tilde mark (~)
   //Destructor is not return any value or void
  //Destructor has not parameters or copy Destructor
 //Destructor deleted dynamic object from memory(destroyed it from under to up)
//Every Class has only one Destructor
   ~triangle() // Destructor
   {
       cout << "...Triangle has been deleted..." << endl;
   }
    void setbase(float b)
    {
        base = b;
    }
    void setheight(float h)
    {
        height = h;
    }
    float getbase()
    {
        return base;
    }
    float getheight()
    {
        return height;
    }
    float area()
    {
        return 0.5*base*height;
    }
    void print()
    {
      cout << "The Base Of Triangle = " << getbase() << endl;
      cout << "The Height of Triangle = " << getheight() << endl;
      cout << "The Area Of Triangle = " << area() << endl;
    }

};
int main()
{   int b , h;
    triangle t(b , h);
    t.setbase(6);
    t.setheight(10);
    t.print();


    return 0;
}
