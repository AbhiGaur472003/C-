#include<iostream>
using namespace std;
void fact(int n){
    if(n==1 || n==0){
        cout<<"Factorial of "<<n<<" is "<<1<<endl;;
    }
    else{
        int fact=1;
        for(int i=2;i<=n;i++){
            fact=fact*i;
        }
        cout<<"Factorial of "<<n<<" is "<<fact<<endl;
    }
} 
int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    fact(n);
    return 0;
}
