#include <queue>
#include <iostream>
using namespace std;
priority_queue<int> q; //优先级由高到低 
int n,x;
int main(){
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>x;
		q.push(x);
	}
	cout<<q.top();
	return 0;
}
