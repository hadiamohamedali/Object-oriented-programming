//Exception Handling with object
#include <iostream>
using namespace std;
class cexecption{
private:
    int array[100];
public:
    cexecption()
    {
        for(int i = 0; i < 100; i++)
        {
            array[i] = i;
        }
    }
    int getElement(int x)
    {
        if(x >= 100)
            throw xBig();
        else if(x < 0)
            throw xSmall();
        else
            return array[x];
    }
    class xBig
    {
    public:
        xBig(){}
        void big()
        {
          cout << "...Big Element..." << endl;
        }
    };
    class xSmall{
    public:
        xSmall(){}
        void small()
        {
          cout << "...Small Element..." << endl;

        }
    };
};
int main()
{
    int i = 0;
    cexecption a;
    try{
        cout << "Choise The Element : ";
        cin >> i;
        cout << "The Element: " << a.getElement(i) << endl;
    }
    catch(cexecption::xSmall s)
    {
       s.small();
    }
    catch(cexecption::xBig b)
    {
       b.big();
    }
    return 0;
}
