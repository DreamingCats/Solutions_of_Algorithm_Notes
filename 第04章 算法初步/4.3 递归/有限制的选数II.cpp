#include<iostream>
#include<cstdio>
#include<algorithm>
//每个数可以重复用 
using namespace std;

const int maxnum=13;
int score[maxnum];
int n,K;
int nowcount=0;

void DFS(int idx,int sum){
	if(idx==n+1){
		if(sum==K){
			nowcount++;
		}
		return;
	}
	if(sum>K){
		return;
	}
	
	DFS(idx,sum+score[idx]); //上一题的idx+1改为idx即可，可以继续选取这个数 
	DFS(idx+1,sum);	
}

int main(){
	//输入 
	cin>>n>>K;
	for(int i=1;i<=n;i++){
		cin>>score[i];
	}
	
	DFS(1,0);

	
	cout<<nowcount;
	return 0;
} 
