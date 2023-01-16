#include<iostream>
#include<cstdio>
#include<algorithm>
//ÿ���������ظ��� 
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
	
	DFS(idx,sum+score[idx]); //��һ���idx+1��Ϊidx���ɣ����Լ���ѡȡ����� 
	DFS(idx+1,sum);	
}

int main(){
	//���� 
	cin>>n>>K;
	for(int i=1;i<=n;i++){
		cin>>score[i];
	}
	
	DFS(1,0);

	
	cout<<nowcount;
	return 0;
} 
