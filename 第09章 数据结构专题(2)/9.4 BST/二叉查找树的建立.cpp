#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
const int maxn=50;

struct Node{
	int data;
	int left;
	int right;
}nodes[maxn];

int cnt=0;

int newNode(int data){
	nodes[cnt].data=data;
	nodes[cnt].left=nodes[cnt].right=-1;
	return cnt++;
}

int insert(int root,int data){
	if(root==-1){
		return newNode(data);
	}
	else if(data<nodes[root].data){
		nodes[root].left=insert(nodes[root].left,data);
	}
	else{
		nodes[root].right=insert(nodes[root].right,data);
	}
	return root;
}

vector<int> pre,in,post;
void preOrder(int root){
	if(root==-1){
		return;
	}
	
	pre.push_back(nodes[root].data);
	preOrder(nodes[root].left);
	preOrder(nodes[root].right);
}

int main(){
	int n,i,data,root=-1;
	cin>>n;
	
	for(i=0;i<n;i++){
		cin>>data;
		root=insert(root,data);
	}
	
	preOrder(root);
	
	for(i=0;i<n;i++){
		cout<<pre[i];
		if(i<n-1){
			cout<<" ";
		}
	}
	return 0;
}
