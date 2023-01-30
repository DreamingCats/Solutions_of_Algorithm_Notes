#include <iostream>
#include <queue>
using namespace std;
int main(){
	queue<int> q;
	int n,x,i;
	cin>>n;
	for(i=0;i<n;i++){
		cin>>x;
		q.push(x);
	}
	
	while(q.size()>1){
		int a=q.front();
		q.pop();
		int b=q.front();
		q.pop();
		
		q.push(a+b);
	}
	
	cout<<q.front();
	return 0;	
}
