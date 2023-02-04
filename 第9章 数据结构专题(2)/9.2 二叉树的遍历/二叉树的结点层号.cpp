#include <iostream>
#include <vector> 
#include <queue>
using namespace std;

int layers[50];

struct Node{
	int left;
	int right;
}node[50];

void layerOrder(int root){
	queue<int> q;
	q.push(root);
	
	int layer=1;
	while(!q.empty()){
		int cnt=q.size();
		for(int i=0;i<cnt;i++){
			int front=q.front();
			q.pop();
			layers[front]=layer;
		
			if(node[front].left!=-1){
				q.push(node[front].left);
			}
			if(node[front].right!=-1){
				q.push(node[front].right);
			}
		}
		layer++;
	}
}

int main(){
	int n,i;
	cin>>n;
	for(i=0;i<n;i++){
		cin>>node[i].left>>node[i].right;
	}
	
	layerOrder(0); //root
	
	for(i=0;i<n;i++){
		cout<<layers[i];
		if(i<n-1){
			cout<<" ";
		}
	}
	
	return 0;
} 
