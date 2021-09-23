#include<iostream>
using namespace std;
int Sqrt(int n){
    int i=1,result=1;
    while(result<=n){
        i++;
        result=i*i;
    }
    return i-1;
}
int Prime(int n){
    if(n==1||n==0){
        return 0;
    }
    if(n%2==0){
        if(n==2)
            return 1;
        else
            return 0;
    }
    for(int i=3;i<=Sqrt(n);i+=2){
        if(n%i==0)
            return 0;
    }
    return 1;
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
     
