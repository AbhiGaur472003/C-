#include<iostream>
using namespace std;
class Base{
    public:
    virtual ~Base(){
        cout<<"Base Class Destructor"<<endl;
    }
};
class Child:public Base{
    public:
    virtual ~Child(){
        cout<<"Child Class Destructor"<<endl;
    }
};
int main(){
    Child a;
    Base *p=&a;
    cout<<"Calling Child Destructor and then Base Destructor::"<<endl;
    p->~Base();
    cout<<"\n"<<"Deleting Base Class Pointer:: ";
    delete p;
    cout<<"\n";
}