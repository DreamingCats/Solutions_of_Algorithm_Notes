#include <iostream>
#include <queue>
using namespace std;
int main(){
	queue<int> q;
	int n,k,i;
	cin>>n>>k;
	for(i=1;i<=n;i++){
		q.push(i);
	}
	
	while(!q.empty()){
		for(i=0;i<k-1;i++){
			int deq=q.front();
			q.pop();
			q.push(deq); //重新入队 
		}
		
		cout<<q.front();
		q.pop();
		
		if(!q.empty()){
			cout<<" ";
		}
	}
	return 0;	
}
