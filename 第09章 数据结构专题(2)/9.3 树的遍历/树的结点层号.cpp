#include <iostream>
#include <vector> 
#include <queue>
using namespace std;

int layers[50];

struct Node{
	vector<int> child;
}nodes[50];

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
		
			for(int i=0;i<nodes[front].child.size();i++){
				q.push(nodes[front].child[i]);
			}
		}
		layer++;
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
	
	layerOrder(0); //root
	
	for(int i=0;i<n;i++){
		cout<<layers[i];
		if(i<n-1){
			cout<<" ";
		}
	}
	
	return 0;
} 
