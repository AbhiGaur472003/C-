#include<iostream>
using namespace std;
class Base{
public:
    int add(int a,int b){        //Can't see by Child Class Object due to overriding....
        cout<<"Calling Base Class"<<": ";
        return a+b;
    }
    float add(float a,float b){  //Can't see by Child Class Object due to overriding....
        cout<<"Calling Base Class"<<": ";
        return a+b;
    }
};
class Child:public Base{
public:
    int add(int a,int b){
        cout<<"Calling Child Class"<<": ";
        return a+b+10;
    }
};
int main(){
    Base b;
    Child a;
    cout<<"Addition is(2,3): "<<b.add(2,3)<<endl;
    cout<<"Addition is(2.4f,4.5f): "<<b.add(2.4f,4.5f)<<endl;
    cout<<"Addition is(5,7): "<<a.add(5,7)<<endl;
    cout<<"Addition is(4.5f,6.7f): "<<a.add(4.5f,6.7f)<<endl;
}
