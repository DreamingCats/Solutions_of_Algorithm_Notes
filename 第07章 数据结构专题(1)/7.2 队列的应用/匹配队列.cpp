#include <iostream>
#include <queue>
using namespace std;
int main(){
	queue<int> q1,q2;
	int n,x,i;
	cin>>n;
	
	for(i=0;i<n;i++){
		cin>>x;
		q1.push(x);
	}
	for(i=0;i<n;i++){
		cin>>x;
		q2.push(x);
	}
	
	int cnt=0;
	
	while(!q1.empty()){
		if(q1.front()==q2.front()){
			q1.pop();
			q2.pop();
		}
		else{ //将q2的队首元素移至队尾
			q2.push(q2.front());
			q2.pop();
		}
		cnt++;
	}
	
	cout<<cnt;
	return 0;	
}
