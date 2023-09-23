#include <iostream>
#include <bits/stdc++.h>
using namespace std;
//Notes......
//Address Of Any Element in Array = Address of The first Element + Index
// arr[i] == *(arr + i)
//Array is constant Pointer
int main()
{   //Method 1
    int arr[5] = {10 , 20 , 30 , 40 , 50};
    //Print Address of The First Element in Array
    cout << "The Address Of Arr[0] is : " << arr + 0 << endl;
    //Print The First Value in Array with Pointer
    cout << "The First Value in Array = " << *(arr + 0) << endl; // 10
      //Print Address of The Second Element in Array
    cout << "The Address Of Arr[1] is : " << arr + 1 << endl;
    //Print The Second Value in Array with Pointer
    cout << "The Second Value in Array = " << *(arr + 1) << endl; // 20
cout << "===============================================================================================" << endl;
   //Method 2
   int arr1[5] = {100 , 200 , 300 , 400, 500};
   int *ptr;
   ptr = arr1;
   //Print Address of The First Element in Array
   cout << "The Address of Arr1 [0] is : " << ptr << endl;
   //Print The First Value in Array with Pointer
   cout << "The First Value in Array1 = "<< *ptr << endl;//100
   cout << "--------------------------" << endl;
   int *ptr2;
   ptr2 = &arr1[1];
   //Print Address of The Second Element in Array
   cout << "The Address of Arr1 [1] is : " << ptr2 << endl;
   //Print The Second Value in Array with Pointer
   cout << "The Second Value in Array1 = " << *ptr2 << endl;//200
   cout << "--------------------------" << endl;
   ptr += 2;
     //print The address of The third value
   cout << "The Address of Arr1 [2] is : " << ptr << endl;
      //print Third Value in Array1
   cout << "The Third Value in Array1 = "<< *ptr << endl; // 300
cout << "==============================================================================================" << endl;
//Practice
int sz1;
cout << "The Size of Array4 = "; cin >> sz1;
int arr4[sz1];
int *ptr3 = arr4;
for(int j = 0; j <= sz1; j++) // 1000 2000 3000 ........
{
    cin >> arr4[j];
}
cout << "....Print All Values Of Array 4...." << endl;
for(int j = 0; j <= sz1; j++)
{
   cout << "Round : " << j << " = " << *(arr4 + j) << endl;
}
cout << "....Print All Address Of Array 4...." << endl;
for(int j = 0; j <= sz1; j++)
{
   cout << "Address : " << j << " = " << ptr3 + j << endl;
}



    return 0;
}
