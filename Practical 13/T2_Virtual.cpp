#include<iostream>
using namespace std;
class Base{
public:
    virtual int add(int a,int b){
        cout<<"Calling Base Class"<<" :";
        return a+b;
    }
    virtual multi(int a,int b)=0;
};
class Child:public Base{
public:
    int add(int a,int b){
        cout<<"Calling Child Class"<<" :";
        return a+b+10;
    }
    int multi(int a,int b){
        cout<<"Calling Child Class"<<" :";
        return a*b;
    }
};
int main(){
    Child b;
    Base *a;
    a=&b;
    cout<<"Addition : "<<a->add(3,4)<<endl;
    cout<<"Multiplication : "<<a->multi(3,6)<<endl;
}