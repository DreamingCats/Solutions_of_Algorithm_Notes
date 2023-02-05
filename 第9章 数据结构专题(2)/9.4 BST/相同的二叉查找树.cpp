#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
const int maxn=100;

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

void preOrder(int root,vector<int>& pre){
	if(root==-1){
		return;
	}
	
	pre.push_back(nodes[root].data);
	preOrder(nodes[root].left,pre);
	preOrder(nodes[root].right,pre);
}

int main(){
	int n,i,data;
	cin>>n;
	
	int root1=-1,root2=-1;
	for(i=0;i<n;i++){
		cin>>data;
		root1=insert(root1,data);
	}
	for(i=0;i<n;i++){
		cin>>data;
		root2=insert(root2,data);
	}
	
	vector<int> pre1,pre2;
	preOrder(root1,pre1);
	preOrder(root2,pre2);
	
	cout<<(pre1==pre2?"Yes":"No");
	
	return 0;
}
