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

int inIdx=0;

vector<int> pre,in,post;

void preOrder(int root){
	if(root==-1){
		return;
	}
	
	pre.push_back(nodes[root].data);
	preOrder(nodes[root].left);
	preOrder(nodes[root].right);
}

void inOrder(int root){
	if(root==-1){
		return;
	}
	
	inOrder(nodes[root].left);
	nodes[root].data=in[inIdx++];
	inOrder(nodes[root].right);
}

void postOrder(int root) {
    if (root == -1) {
        return;
    }
    postOrder(nodes[root].left);
    postOrder(nodes[root].right);
    nodes[root].data=in[inIdx++];
}


int main(){
	int n,x;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>x;
		in.push_back(x);		
	}
	for(int i=0;i<n;i++){
		cin>>nodes[i].left>>nodes[i].right;
	}

	sort(in.begin(),in.end());
	
	inOrder(0);
	preOrder(0);
	
	for(int i=0;i<n;i++){
		cout<<pre[i];
		if(i<n-1){
			cout<<" "; 
		}
	}
	
	return 0;
} 
