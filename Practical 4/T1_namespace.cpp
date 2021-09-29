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
    cout<<"Sum of 6 and 20 is(calling first namespace): ";
    cout<<first::sum(6,20)<<endl;
    cout<<"Sum of 20.43424 and 30.4325234 is(calling second namespace): ";
    cout<<second::sum(20.43424,30.4325234)<<endl;
    cout<<"Sum of 6 and 9.6435 is(calling first namespace): ";
    cout<<first::sum(6,9.6435)<<endl;
    cout<<"Sum of 10 and 30.4325234 is(calling second namespace): ";
    cout<<second::sum(10,30.4325234)<<endl;
    return 0;
}
