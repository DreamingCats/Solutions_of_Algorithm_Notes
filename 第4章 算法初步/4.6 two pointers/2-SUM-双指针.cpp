//这几道题有408DS手写代码内味了 
#include <iostream>
using namespace std;
const int maxn=100000;
int a[maxn];
int main(){
	int n,k;
	cin>>n>>k;
	int i,j;
	for(i=0;i<n;i++){
		cin>>a[i];
	}
	
	int cnt1=0,cnt2=0;
	
	//时间复杂度为O(n^2) 
	for(i=0;i<n;i++){
		for(j=i+1;j<n;j++){
			if(a[i]+a[j]==k){
				cnt1++;
			}
		}
	}
	
	//时间复杂度为O(n) 
	int i2=0,j2=n-1;
	while(i2<j2){
		if(a[i2]+a[j2]==k){
			i2++;
			j2--;
			cnt2++;
		}
		else if(a[i2]+a[j2]<k){
			i2++;
		}
		else{
			j2--;
		}
	}
	
	//cout<<cnt1;
	cout<<cnt2;
	return 0;
}
