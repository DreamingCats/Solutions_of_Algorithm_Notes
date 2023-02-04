#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
const int maxn=50;

struct Node{
	int left;
	int right;
}nodes[maxn];

vector<int> pre,in,post;

int LCA(int root,int p,int q){
	if(root==-1){ //NULL
		return -1;
	}
	
	else if(root==p||root==q){
		return root;
	}
	
	int leftResult=LCA(nodes[root].left,p,q);
	int rightResult=LCA(nodes[root].right,p,q);
	
	if(leftResult!=-1 && rightResult!=-1){ //是根节点 
		return root;
	}
	else if(leftResult!=-1){
		return leftResult;
	}
	else if(rightResult!=-1){
		return rightResult;
	}	
}

int main(){
	int n,p,q;
	cin>>n>>p>>q;
	
	for(int i=0;i<n;i++){
		cin>>nodes[i].left>>nodes[i].right;
	}
	
	cout<<LCA(0,p,q);
	
	return 0;
} 
