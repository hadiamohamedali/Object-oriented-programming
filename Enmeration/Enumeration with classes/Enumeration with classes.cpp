#include <iostream>
#include <bits/stdc++.h>
using namespace std;
string da[7] = {"Saturday" , "Sunday" , "Monday" , "Tuesday" , "Wednesday" , "Thursday"  , "Friday"};
enum Days {Saturday = 1 , Sunday , Monday , Tuesday , Wednesday , Thursday , Friday};
class week
{
private:
    Days d[7];
public:
    void setday(Days w[])
    {
        for(int i = 0; i < 7; i++)
        {
          d[i] = w[i];
        }
    }
    void print()
    {
        for(int i = 0; i < 7; i++)
        {
          cout << "The Number of day " << da[i] << " = " << d[i] << endl;
        }
    }
};
int main()
{
    Days d[7] = {Saturday , Sunday , Monday , Tuesday , Wednesday , Thursday , Friday};
    week g;
    g.setday(d);
    g.print();

    return 0;
}
