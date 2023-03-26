//Õ¨…œÃ‚ 
#include <iostream>
#include <queue>
using namespace std;
priority_queue<int,vector<int>,greater<int>> q;

int main(){
	int n,weight;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>weight;
		q.push(weight);
	}
	
	int ans=0;
	while(q.size()>1){
		int top1=q.top();
		q.pop();
		
		int top2=q.top();
		q.pop();
		
		int add=top1+top2;
		q.push(add);
		ans+=add;
	}
	
	cout<<ans;
	return 0;
}
