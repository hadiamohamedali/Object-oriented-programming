//Inheritance
#include <iostream>
using namespace std;
class CPolygon{
protected:
    int width , height;
public:
    void set_values(int w , int h)
    {
        width = w;
        height = h;
    }
};
//Inheritance
class CRectangle : public CPolygon {
public:
    int area()
    {
        return(width * height);
    }
};
//Inheritance
class CTriangle : public CPolygon{
public:
    int area()
    {
        return ((width * height) / 2);
    }
};
int main()
{
    CRectangle rect;
    CTriangle trgl;
    rect.set_values(4 , 5);
    trgl.set_values(4 , 5);
    cout << "CRectangle Area = " << rect.area();
    cout << endl;
    cout << "CTriangle Area = " << trgl.area();
/*
CPolygon::width --> protected access
CRectangle::width --> protected access
CPolygon::set_values() --> public access
CRectangle::set_values() --> public access
*/
cout << "==========================================================" << endl;


    return 0;
}
