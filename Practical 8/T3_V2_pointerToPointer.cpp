#include<iostream>
using namespace std;
int main(){
    int a=10;
    cout<<"Before changing Value of a "<<a<<endl;
    int *p;
    int **q;
    p=&a;
    q=&p;
    **q=20;
    cout<<"After changing Value of a "<<a<<endl;
    return 0;
}
