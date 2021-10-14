#include<iostream>
using namespace std;
int  main(){
	int ar[5][4]={	{1,2,3,4},
			{5,6,7,8},
			{9,10,11,12},
			{13,14,15,16},
			{17,18,19,20}
		     };	
        cout<<"Matrix is: "<<endl;
        for(int i=0;i<5;i++){
            for(int j=0;j<4;j++){
                cout<<ar[i][j]<<"\t";
            }
            cout<<endl;
        }
        cout<<"Converting Matrix:"<<endl;
	int t=0,tpc=0,br=4,bc=3;
	while(t<=br||tpc<=bc){
		for(int i=t;i<=bc;i++){
			cout<<ar[t][i]<<" ";
		}
		t++;
		for(int i=t;i<=br;i++){
			cout<<ar[i][bc]<<" ";
		}
		bc--;
		for(int i=bc;i>=tpc;i--){
			cout<<ar[br][i]<<" ";
		}
		br--;
		for(int i=br;i>=t;i--){
			cout<<ar[i][tpc]<<" ";
		}
		tpc++;
	}
        cout<<endl;
	return 0;
}
