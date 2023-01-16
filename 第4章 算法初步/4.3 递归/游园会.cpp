#include<iostream>
#include<cstdio>
#include<algorithm>
#include<set>

using namespace std;

const int maxnum=13;
int score[maxnum];
int n;
set<int> result;

void DFS(int idx,int sum){
	if(idx==n+1){
		result.insert(sum);
		return;
	}
	DFS(idx+1,sum);
	DFS(idx+1,sum+score[idx]);
}

int main(){
	//ÊäÈë 
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>score[i];
	}
	
	DFS(1,0);
	int idx=0;
	
	for(set<int>::iterator j=result.begin();j!=result.end();j++){
		cout<<*j;
		printf(idx+1<result.size()?" ":"\n");
		idx++;
	}
	
	return 0;
} 
