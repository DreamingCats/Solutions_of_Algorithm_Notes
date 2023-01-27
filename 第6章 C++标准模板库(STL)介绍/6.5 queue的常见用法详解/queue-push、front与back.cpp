#include <queue>
#include <iostream>
using namespace std;
queue<int> q;
int n,x;
int main(){
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>x;
		q.push(x);
	}
	cout<<q.front()<<" "<<q.back();
	return 0;
}
