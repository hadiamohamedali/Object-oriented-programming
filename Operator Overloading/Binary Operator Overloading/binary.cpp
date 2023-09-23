//Default Operator Overloading
#include <iostream>
using namespace std;
class triangle
{
private:
    float width , height;
public:
    triangle(float a = 0 , float b = 0)
    {
      //parameterized Constructor
      width = a;
      height = b;
    }
    void getdata()
    {
      cout << "Width Value = "; cin >> width;
      cout << endl;
      cout << "Height Value = "; cin >> height;
      cout << endl;
    }
    void showdata()
    {
      cout << "Width and Height = (" << width << "," << height << ")" << endl;
    }
    void add(triangle c1 , triangle c2) //Method 1
    {
       width = c1.width + c2.width;
       height = c1.height + c2.height;
    }
    triangle add1(triangle c2) //Method 2
    {
      triangle c3;
      c3.width = width + c2.width;
      c3.height = height + c2.height;
      return c3;
    }
    //Method 3 Operator Overloading (+ * / -)
    triangle operator+(triangle c2)
    {
      triangle c3;
      c3.width = width + c2.width;
      c3.height = height + c2.height;
      return c3;
    }
    triangle operator-(triangle c2)
    {
      triangle c3;
      c3.width = width - c2.width;
      c3.height = height - c2.height;
      return c3;
    }
    triangle operator*(triangle c2)
    {
      triangle c3;
      c3.width = width * c2.width;
      c3.height = height * c2.height;
      return c3;
    }
    triangle operator/(triangle c2)
    {
      triangle c3;
      c3.width = width / c2.width;
      c3.height = height / c2.height;
      return c3;
    }
};
int main()
{
    triangle c1 , c2(3.5 , 1.5) , c3;
    //Method 1
    c1.getdata();
    c3.add(c1 , c2);
    c3.showdata();
    cout << "======================================" << endl;
    //Method 2
    c1.getdata();
    c3 = c1.add1(c2);
    c3.showdata();
    cout << "======================================" << endl;
    //Method 3 ==> Operator Overloading (+)
    c1.getdata();
    c3 = c1 + c2;
    c3.showdata();
    cout << "------------------" << endl;
    //Method 3 ==> Operator Overloading (-)
    c1.getdata();
    c3 = c1 - c2;
    c3.showdata();
    cout << "------------------" << endl;
    //Method 3 ==> Operator Overloading (*)
    c1.getdata();
    c3 = c1 * c2;
    c3.showdata();
    cout << "------------------" << endl;
    //Method 3 ==> Operator Overloading (/)
    c1.getdata();
    c3 = c1 / c2;
    c3.showdata();

    return 0;
}
