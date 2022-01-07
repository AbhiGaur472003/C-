#include<iostream>
using namespace std;
class Base{
    public:
    ~Base(){
        cout<<"Base Class Destructor"<<endl;
    }
};
class Child:public Base{
    public:
    ~Child(){
        cout<<"Child Class Destructor"<<endl;
    }
};
int main(){
    Child a;
    Base *p=&a;
    cout<<"Calling Base Destructor:: ";
    p->~Base();
    cout<<"\n"<<"Deleting Base Class Pointer:: ";
    delete p;
    cout<<"\n";
}