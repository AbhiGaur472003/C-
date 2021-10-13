#include <iostream>
using namespace std;

int main()
{
    int a[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    cout<<"\nMatrix Before Reversing:"<<endl;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    int b=0;
    cout<<"\nMatrix After Reversing:"<<endl;
    for(int i=0,k=2;i<3,k>=0;i++,k--){
        for(int j=0,l=2;j<3,l>=0;j++,l--){
            if(i==k&&j==l){
                b=0;
                break;
            }
            int temp=a[i][j];
            a[i][j]=a[k][l];
            a[k][l]=temp;
        }
        if(b==0)
           break;
        cout<<endl;
    }
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}

