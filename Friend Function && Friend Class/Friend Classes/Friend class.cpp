//Friend Function And Friend Classes
#include <iostream>
using namespace std;
class CSquare; //hint
class CRectangle{
private:
    int width , height;
public:
    int area(void)
    {
        return(width * height);
    }
    void convert(CSquare);
};
class CSquare{
private:
    int side;
public:
    void set_side(int x)
    {
        side = x;
    }
    friend class CRectangle;
};
void CRectangle :: convert(CSquare a)
{
    width = a.side;
    height = a.side;
}
int main()
{
    CSquare sqr; CRectangle rect;
    sqr.set_side(5);
    rect.convert(sqr);
    cout << "The Area = " << rect.area() << endl;

    return 0;
}
