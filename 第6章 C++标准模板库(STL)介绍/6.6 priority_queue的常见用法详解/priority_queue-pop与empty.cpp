#include <queue>
#include <iostream>
using namespace std;
priority_queue<int> q;

int main(){
	int n,x,k,i;
	cin>>n>>k;
	if(n==k){
		cout<<"empty priority queue";
	}
	else{
		for(i=0;i<n;i++){
			cin>>x;
			q.push(x);
		}
		for(i=0;i<k;i++){
			q.pop();
		}
		cout<<q.top();
	}
	
	return 0;
}
