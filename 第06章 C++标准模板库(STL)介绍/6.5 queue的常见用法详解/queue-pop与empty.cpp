#include <queue>
#include <iostream>
using namespace std;
queue<int> q;

int main(){
	int n,x,k,i;
	cin>>n>>k;
	if(n==k){
		cout<<"empty queue";
	}
	else{
		for(i=0;i<n;i++){
			cin>>x;
			q.push(x);
		}
		for(i=0;i<k;i++){
			q.pop();
		}
		cout<<q.front()<<" "<<q.back();
	}
	
	return 0;
}
