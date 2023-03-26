//暴力解就是找最大值 
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
	
	for(i=1;i<n-1;i++){
		if(a[i]>a[i-1]&&a[i]>a[i+1]){ //找最大值 
			cout<<i;
		} 
	}
	return 0;
} 
