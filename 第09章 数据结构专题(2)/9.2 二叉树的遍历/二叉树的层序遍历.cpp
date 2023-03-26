#include <iostream>
#include <vector> 
#include <queue>
using namespace std;

vector<int> layer;

struct Node{
	int left;
	int right;
}node[50];

void layerOrder(int root){
	queue<int> q;
	q.push(root);
	while(!q.empty()){
		int front=q.front();
		q.pop();
		layer.push_back(front);
		
		if(node[front].left!=-1){
			q.push(node[front].left);
		}
		if(node[front].right!=-1){
			q.push(node[front].right);
		}
	}
}

int main(){
	int n,i;
	cin>>n;
	for(i=0;i<n;i++){
		cin>>node[i].left>>node[i].right;
	}
	
	layerOrder(0); //root
	
	int len=layer.size();
	for(i=0;i<len;i++){
		cout<<layer[i];
		if(i<len-1){
			cout<<" ";
		}
	}
	
	return 0;
} 
