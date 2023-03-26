#include<iostream>
using namespace std;

const int maxn=100000;
int a[maxn];

int main(){
	int n,i;
	cin>>n;
	for(i=0;i<n;i++){
		cin>>a[i];
	}
	
	int cnt=0;
	for(i=0;i<n;i++){
		if(a[i]==1){
			cout<<i;
			break;
		}
		else{
			cnt++;
		}
	}
	if(cnt==n){
		cout<<"-1";
	}
	return 0;
} 
