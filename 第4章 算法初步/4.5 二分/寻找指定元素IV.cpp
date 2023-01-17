//Õ¨…œ°£°£ 
#include<iostream>
using namespace std;

const int maxn=100001;
int a[maxn];

int main(){
	int n,x;
	cin>>n>>x;
	int i;
	for(i=0;i<n;i++){
		cin>>a[i];
	}
	
	for(i=0;i<n;i++){
		if(a[i]>x){
			cout<<i;
			break;
		}
		if(i==n-1&&a[i]<x){
			cout<<-1;
		}
	}
	
	return 0;
}
