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

void preOrder(int root){
	if(root==-1){
		return;
	}
	
	pre.push_back(root);
	preOrder(nodes[root].left);
	preOrder(nodes[root].right);
}

void inOrder(int root){
	if(root==-1){
		return;
	}
	
	inOrder(nodes[root].left);
	in.push_back(root);
	inOrder(nodes[root].right);
}

void postOrder(int root){
	if(root==-1){
		return;
	}
	
	postOrder(nodes[root].left);
	postOrder(nodes[root].right);
	post.push_back(root);
}

void rev(int root){
	if(root==-1){
		return;
	}
	
	rev(nodes[root].left);
	rev(nodes[root].right);
	swap(nodes[root].left,nodes[root].right);
}

int main(){
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>nodes[i].left>>nodes[i].right;
	}
	
	rev(0);
	
	preOrder(0);
	for(int i=0;i<n;i++){
		cout<<pre[i];
		if(i<n-1){
			cout<<" "; 
		}
	}
	
	cout<<endl;
	
	inOrder(0);
	for(int i=0;i<n;i++){
		cout<<in[i];
		if(i<n-1){
			cout<<" "; 
		}
	}
	
	return 0;
} 
