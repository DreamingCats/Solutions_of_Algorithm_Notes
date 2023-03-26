#include <iostream>
#include <vector> 
#include <queue>
using namespace std;

struct Node{
	int left;
	int right;
}nodes[50];

vector<int> getL(int root){
	vector<int> leftView;
	queue<int> q;
	q.push(root);
	
	while(!q.empty()){
		int cnt=q.size();
		for(int i=0;i<cnt;i++){
			int front=q.front();
			q.pop();
			
			if(i==0){
				leftView.push_back(front);
			}
			if(nodes[front].left!=-1){
				q.push(nodes[front].left);
			}
			if(nodes[front].right!=-1){
				q.push(nodes[front].right);
			}
		}
	}
	return leftView;
} 

int main(){
	int n,i;
	cin>>n;
	for(i=0;i<n;i++){
		cin>>nodes[i].left>>nodes[i].right;
	}
	
	vector<int> leftView=getL(0);
	int len=leftView.size();
	for(i=0;i<len;i++){
		cout<<leftView[i];
		if(i<len-1){
			cout<<" ";
		}
	}
	
	return 0;
}
