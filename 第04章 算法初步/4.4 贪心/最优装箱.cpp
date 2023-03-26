#include<algorithm>
#include<iostream>
#include<cmath>
using namespace std;

const int maxn=100000;

int main(){
	int n,w;
	cin>>n>>w;
	int a[maxn];
	int i;
	for(i=0;i<n;i++){
		cin>>a[i];
	}
	//从小到大排序依次装箱 
	sort(a,a+n);
	
	int cnt=0,sum=0;
	for(i=0;i<n;i++){
		if(sum+a[i]<=w){
			sum+=a[i];
			cnt++;
		}
	}
	
	cout<<cnt<<" "<<sum;
	return 0;
}
