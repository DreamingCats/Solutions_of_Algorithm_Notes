#include <iostream>
#include <vector> 
#include <queue>
using namespace std;

struct Node{
	int left;
	int right;
}nodes[64];

bool isC(int root){
	queue<int> q;
	q.push(root);
	bool getNull=false;
	
	while(!q.empty()){
		int front=q.front();
		q.pop();
		if(front==-1){
			getNull=true;
		}
		else{
			if(getNull){
				return false;
			}
			q.push(nodes[front].left);
			q.push(nodes[front].right);
		}
	}
	return true;
}

int main(){
	int n,i;
	cin>>n;
	for(i=0;i<n;i++){
		cin>>nodes[i].left>>nodes[i].right;
	}
	
	cout<<(isC(0)?"Yes":"No");
	
	return 0;
}
