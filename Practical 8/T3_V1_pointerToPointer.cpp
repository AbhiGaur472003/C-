#include<iostream>
using namespace std;
int main(){
    int a=10;
    int *p;
    int **q;
    p=&a;
    q=&p;
    cout<<"Value of a using p pointer "<<*p<<endl;
    cout<<"Value of a using q pointer "<<**q<<endl;
    return 0;
}
