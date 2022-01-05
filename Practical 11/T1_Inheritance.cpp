#include <iostream>
using namespace std;
class Parent{
public:
    void DisplayA(){
        cout<<"Displaying Parent Class"<<endl;
    }
};
class Child:public Parent{
public:
    void DisplayB(){
        cout<<"Displaying Child Class"<<endl;
        cout<<"Calling Parent class Function in Child class function:  ";
        DisplayA();
    }
};
int main()
{
    Child a;
    a.DisplayB();
    cout<<endl<<endl;
    cout<<"Calling Directly the Parent class method using child object  ";
    a.DisplayA();
    return 0;
}
