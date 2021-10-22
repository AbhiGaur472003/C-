#include<iostream>
using namespace std;
void swap(int &a,int &b){
    int t=a;
    a=b;
    b=t;
}
int main(){
    int a=20;
    int b=80;
    cout<<"Value of a and b before swapping "<<a<<" "<<b<<endl;
    swap(a,b);
    cout<<"Value of a and b after swapping "<<a<<" "<<b<<endl;
    return 0;
}
