#include<iostream>
using namespace std;
class Parent1{
    public:
    int add(int a,int b){
        cout<<"Calling Parent1 Class:: ";
        return a+b;
    }
};
class Child1:public Parent1{
    public:
    int add(int a,int b){
        cout<<"Calling Child1 Class:: ";
        return a+b+10;
    }
};
class Parent2{
    public:
    virtual int add(int a,int b){
        cout<<"Calling Parent2 Class:: ";
        return a+b;
    }

};
class Child2:public Parent2{
    public:
    int add(int a,int b){
        cout<<"Calling Child2 Class:: ";
        return a+b+10;
    }
};
int main(){
    Child1 a;
    Parent1 *p=&a;       //Compile Time Binding..........
    cout<<"Compile Time Binding:: Addtion(3,5):: "<<p->add(3,5)<<endl;
    Child2 b;
    Parent2 *q=&b;      //Run(Dynamic) Time Binding..........
    cout<<"Run Time Binding:: Addtion(3,5):: "<<q->add(3,5)<<endl;
}