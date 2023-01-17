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
		if(a[i]%2==0){ //这里改成判断偶数 
			cout<<i;
			break;
		}
		else{
			cnt++;
		}
	}
	
	if(cnt==n){ //全是奇数 
		cout<<"-1";
	}
	return 0;
} 
