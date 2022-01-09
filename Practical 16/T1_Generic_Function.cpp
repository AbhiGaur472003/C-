#include<iostream>
using namespace std;

template <typename T>
T Add(T x, T y){
    return x+y;
}

int main(){
    cout<<"Addtion of (two integer)(return type int):: "<<Add<int>(3,5)<<endl;
    cout<<"Addtion of (one integer and one float)(return type double):: ";
    cout<<Add<double>(3,5.4)<<endl;
}