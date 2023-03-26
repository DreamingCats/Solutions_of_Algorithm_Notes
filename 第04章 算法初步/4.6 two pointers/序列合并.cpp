#include <iostream>
#include <algorithm>
#include <cstring>
const int maxn=100000;
int a[maxn*2];
using namespace std;

int merge(int A[],int B[],int C[],int n,int m){
	int i=0,j=0,index=0;
	while(i<n&&j<m){
		if(A[i]<=B[j]){
			C[index++]=A[i++];
		}
		else{
			C[index++]=B[j++];
		}
	}
	while(i<n){
		C[index++]=A[i++];
	}
	while(j<m){
		C[index++]=B[j++];
	}
}

int main(){
	//ÊäÈë 
	int n,m;
	cin>>n>>m;
	int ii;
	int sum=n+m;
	for(ii=0;ii<sum;ii++){
		cin>>a[ii];
	}
	

	sort(a,a+sum);
	for(ii=0;ii<sum;ii++){
		cout<<a[ii];
		if(ii<sum-1){
			cout<<" ";
		}
	}
	return 0;
}
