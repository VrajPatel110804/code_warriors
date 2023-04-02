#include<iostream>
using namespace std;

class child
{
    friend class parent;
    string name,gender;
public:
    void get_data()
    {
        cout<<"Enter name of the child : ";cin>>name;
        cout<<"Enter gender : ";cin>>gender;
    }
    void print()
    {
        cout<<"Name of the child is "<<name<<" and Gender "<<gender;
    }
};

class parent
{
    public:
    void ReadChildData(child &c)
    {
        c.get_data();
    }
    void DisplayChildData(child &c)
    {
        c.print();
    }
};


int main()
{
    child c;
    parent p;
    p.ReadChildData(c);
    p.DisplayChildData(c);
    return 0;
}
