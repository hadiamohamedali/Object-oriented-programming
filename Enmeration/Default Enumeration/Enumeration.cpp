#include <iostream>
#include <bits/stdc++.h>
using namespace std;
//Notes...
//1..When we print variable from Enumeration -> we will get integer value.
//2..First Element From Enumeration Start From Zero.
//3.. Constant Values We can not print it and can not edit it from user
enum days {Saturday = 1 , Sunday , Monday , Tuesday , Wednesday , Thrusday , Friday};
int main()
{
    string d[7] = {"Saturday" , "Sunday" , "Monday" , "Tuesday" , "Wednesday" , "Thrusday" , "Friday"};
    days m[7] = {Saturday , Sunday , Monday , Tuesday , Wednesday , Thrusday , Friday};
    for(int i = 0; i < 7; i++)
    {
        cout << m[i] << " - " << d[i] << endl;
    }

    return 0;

}
