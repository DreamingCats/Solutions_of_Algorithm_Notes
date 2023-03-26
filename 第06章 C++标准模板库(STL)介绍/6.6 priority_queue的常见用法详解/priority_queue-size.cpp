#include <queue>
#include <iostream>
using namespace std;
priority_queue<int> q;

int main(){
	int n,x,k,i;
	cin>>n>>k;
	if(n==k){
		cout<<"0";
	}
	else{
		for(i=0;i<n;i++){
			cin>>x;
			q.push(x);
		}
		for(i=0;i<k;i++){
			q.pop();
		}
		cout<<q.size();
		//cout<<q.front()<<" "<<q.back();
	}
	
	return 0;
}
