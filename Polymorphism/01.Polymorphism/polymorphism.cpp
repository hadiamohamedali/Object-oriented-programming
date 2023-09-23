//polymorphism
//pointers to base class
#include <iostream>
using namespace std;
class CPolygon{
protected:
    int width , height;
public:
    void set_values(int x , int y)
    {
        width = x;
        height = y;
    }
};
class CRectangle : public CPolygon{
public:
    int area(void)
    {
        return(width * height);
    }
};
class CTriangle : public CPolygon{
public:
    int area(void)
    {
        return(width * height / 2);
    }
};
int main()
{
    CRectangle rect;
    CTriangle trgl;
    CPolygon *p1 , *p2; // Here its Polymorphism
    p1 = &rect;
    p2 = &trgl;
    p1 -> set_values(4 , 5);
    p2 -> set_values(4 , 5);
    /*
    cout << p1 ->area() << endl; ----> False
    error the function area must be in base class
    */
    cout << rect.area() << endl;
    cout << trgl.area() << endl;
    return 0;
}
