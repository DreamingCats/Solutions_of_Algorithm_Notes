#include <iostream>
#include <queue>
using namespace std;

const int maxn=100001;
bool inQ[maxn]={false};

int getStep(int n){
	int step=0;
	queue<int> q;
	q.push(1);
	while(true){
		int cnt=q.size();
		for(int i=0;i<cnt;i++){
			int front=q.front();
			q.pop();
			if(front==n){
				return step;
			}
			
			inQ[front]=true;
			if(front*2<=n && !inQ[front*2]){
				q.push(front*2);
			} 
			if(front+1<=n && !inQ[front+1]){
				q.push(front+1);
			}
		}
		step++;
	}
}

int main(){
	int n,step=0;
	cin>>n;
	cout<<getStep(n);
	return 0;
}
