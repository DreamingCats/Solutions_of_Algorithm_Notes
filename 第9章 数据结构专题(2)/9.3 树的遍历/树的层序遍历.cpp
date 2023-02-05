#include <iostream>
#include <vector>
#include <queue>
using namespace std;
 
struct Node{
	vector<int> child;
}nodes[50];

vector<int> pre,post,layer;

void preOrder(int root){
	pre.push_back(root);
	
	for(int i=0;i<nodes[root].child.size();i++){
		preOrder(nodes[root].child[i]);
	}
}

void postOrder(int root){
	for(int i=0;i<nodes[root].child.size();i++){
		postOrder(nodes[root].child[i]);
	}
	
	post.push_back(root);
}

void layerOrder(int root){
	queue<int> q;
	q.push(root);
	
	while(!q.empty()){
		int front=q.front();
		q.pop();
		layer.push_back(front);
		
		for(int i=0;i<nodes[front].child.size();i++){
			q.push(nodes[front].child[i]);
		}
	}
}

int main(){
	int n,k,x;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>k;
		for(int j=0;j<k;j++){
			cin>>x;
			nodes[i].child.push_back(x);
		}
	}
	
	layerOrder(0);
	
	for(int i=0;i<n;i++){
		cout<<layer[i];
		if(i<n-1){
			cout<<" ";
		}
	}
	
	return 0;
}
