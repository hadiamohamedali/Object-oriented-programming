//...Multiple Inheritance
#include <bits/stdc++.h>
using namespace std;
class name{
private:
    char n[20];
protected:
    void set_name(char N[])
    {
        strcpy(n , N);
    }
    void print_name()
    {
      cout << n << " ";
    }
};
class ID{
private:
    int id;
protected:
    void set_id(int i)
    {
        id = i;
    }
    void print_id()
    {
      cout << id << endl;
    }
};
class student : public name , public ID{
public:
    student(char Name[] , int ID)
    {
        set_name(Name);
        set_id(ID);
    }
    void print()
    {
        print_name();
        print_id();
    }
};
int main()
{
    student st ("Ahmed" , 1450302032);
    st.print();
    return 0;
}
