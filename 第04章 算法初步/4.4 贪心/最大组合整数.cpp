#include<iostream>
using namespace std;
int main(){
	int a[10];
	int i,j;
	for(i=0;i<10;i++){
		cin>>a[i];
	}
	
	if(a[0]!=0&&a[1]==0&&a[2]==0&&a[3]==0&&a[4]==0&&a[5]==0&&a[6]==0&&a[7]==0&&a[8]==0&&a[9]==0){
		cout<<"0";
	}
	else{
		for(i=9;i>=0;i--){
			if(a[i]>0){
				for(int j=0;j<a[i];j++){
					cout<<i;
				}
			}
		}	
	}
	
	return 0;
}
