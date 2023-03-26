#include<iostream>
using namespace std;

const int maxn=100001;
int a[maxn];

int main(){
	int n,x;
	cin>>n>>x;
	int i,cnt=0;
	for(i=0;i<n;i++){
		cin>>a[i];
	}
	
	for(i=0;i<n;i++){
		if(a[i]==x){
			cnt++;
			cout<<i;
			break; //输出第一个 
		}
	}
	if(cnt==0){
		cout<<"-1";
	}
	
	return 0;
}
