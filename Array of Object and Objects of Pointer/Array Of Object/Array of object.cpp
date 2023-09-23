#include <iostream>
#include <bits/stdc++.h>
#include <cstring>
using namespace std;
class Student
{
private:
    char name[20];
    int id;
public:
    Student() // Empty Constructor
    {
       cout << "...Default Constructor..." << endl;
       strcpy(name , "NO Name");
       id = 0;
    }
    Student(char n[] , int d) //parameterize contructor
    {
      cout << "...Parameterized Constructor..." << endl;
      strcpy(name , n);
      id = d;
    }
    void print(void)
    {
        cout << name << "\t" << id << endl;
    }
};
int main()
{
    //Array Of Object
    Student S1("Ali" , 123) , S2("Ahmed" , 456);
    Student arr[4] = {S1 , S2 , Student("Mahmoud" , 987)};
    for(int i = 0; i < 4; i++)
    {
        arr[i].print();
    }
cout << "===========================================================" << endl;
   //Object To Pointer
   Student S3("Menna" , 563) , S4("Hadia" , 369) , *ptr;
   Student arr1[2] = {S3 , S4};
   ptr = arr1;
   for(int j = 0; j < 2; j++)
   {
       (ptr + j)->print();
   }


    return 0;
}
