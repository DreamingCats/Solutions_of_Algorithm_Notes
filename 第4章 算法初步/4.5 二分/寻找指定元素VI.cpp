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
	
	for(i=n;i>=0;i--){ //转化为倒过来找第一个 
		if(a[i]==x){
			cnt++;
			cout<<i;
			break; //找到了就跳出循环 
		}
	}
	if(cnt==0){
		cout<<"-1";
	}
	
	return 0;
}
