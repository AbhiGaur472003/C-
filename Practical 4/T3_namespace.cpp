#include<iostream>
using namespace std;
namespace first{
    int sum(int a,int b){
        return a+b;
    }
}
namespace second{
    float sum(float a,float b){
        return a+b;
    }
}

int main(){
    cout<<sum(4,5)<<endl;
    cout<<sum(3.4,5.4)<<endl;
    cout<<sum(3.4,4)<<endl;
    cout<<sum(4,4.2)<<endl;
    return 0;
}
