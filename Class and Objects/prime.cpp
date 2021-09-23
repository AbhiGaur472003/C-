#include<iostream>
#include<math.h>
using namespace std;
bool Prime(int n)
{
    if(n==1 || n==0){
        return false;
    }
    if(n%2==0){
        if(n==2)
           return true;
        else
           return false;
    }
    for(int i=3;i<=sqrt(n);i+=2){
        if(n%i==0){
            return false;
        }
    }
    return true;
}
int main()
{
    int n;
    cin>>n;
    if(Prime(n))
       cout<<n<<" is a prime number"<<endl;
    else
       cout<<n<<" is not a prime number"<<endl;
}
