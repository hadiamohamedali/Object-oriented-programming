//Exception Handling
#include <iostream>
using namespace std;
int main()
{
    //Example 1
    int hour;
    cin.exceptions(cin.failbit);
    try{
        cin >> hour;
        if(hour < 0)
            throw "Error";
        cout << "The Time is " << hour << ":00" << endl;
    }
    catch (...)
    {
        cerr << "...Wrong Value...\n";
    }
cout << "===============================================" << endl;
    //Example 2
    try{
        int answer;
        cout << "5 + 7 = ";
        cin >> answer;
        if(answer != 12)
            throw "Error , Wrong Answer...\n";
        cout << "Good , Right Answer...\n";
    }
    catch(char const*str)
    {
        cout << "Exception: " << str;
    }
cout << "===============================================" << endl;
    //Example 3
    try{
        int A[10] = {1 , 2 , 3 , 4 , 5 , 6 , 7 , 8 , 9};
        int index;
        cout << "Enter Index: ";
        cin >> index;
        if(index < 0)
            throw "Error , Negative Index...\n";
        if(index >= 10)
           throw index;
        for(int n = 0; n <= index; n++)
        {
            cout << A[n] << " ";
        }
    }
    catch (int i)
    {
        cout << "Exception : ";
        cout << "...Index " << i << " is out Range..."<<endl;
    }
    catch(char const * str)
    {
        cout << "Exception : " << str;
    }
    return 0;
}
