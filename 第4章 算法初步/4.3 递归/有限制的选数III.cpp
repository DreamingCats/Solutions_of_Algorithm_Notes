#include<iostream>
#include<cstdio>
#include<algorithm>
//每个数可以重复用 
using namespace std;

const int maxnum=13;
const int maxk=129;
int score[maxnum];
int n,K;
int ans;
int cnt[maxk];

void DFS(int idx,int sum){
	if(idx==n+1){
		if(sum==K){
			ans++;
		}
		return;
	}
	if(sum>K){
		return;
	}
	int nextidx=idx+1;
	while(nextidx<=n&&score[nextidx]==score[idx]){
		nextidx++;
	}
	for(int i=0;i<=cnt[score[idx]];i++){
		DFS(nextidx,sum+i*score[idx]);
	}
}

int main(){
	//输入 
	cin>>n>>K;
	for(int i=1;i<=n;i++){
		cin>>score[i];
		cnt[score[i]]++;
	}
	
	DFS(1,0);

	
	cout<<ans;
	return 0;
} 
