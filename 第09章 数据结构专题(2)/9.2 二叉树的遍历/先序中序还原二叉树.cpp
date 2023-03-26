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

int buildT(int preL,int preR,int inL,int inR){
	if(preL>preR){
		return -1;
	}
	
	int root=pre[preL];
	int inIndexOfRoot;
	for(int i=inL;i<=inR;i++){
		if(in[i]==root){
			inIndexOfRoot=i;
			break;
		}
	}
	
	int leftCount=inIndexOfRoot-inL;
	nodes[root].left=buildT(preL+1,preL+leftCount,inL,inIndexOfRoot-1);
	nodes[root].right=buildT(preL+leftCount+1,preR,inIndexOfRoot+1,inR);
	return root;
}



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

void postOrder(int root) {
    if (root == -1) {
        return;
    }
    postOrder(nodes[root].left);
    postOrder(nodes[root].right);
    post.push_back(root);
}


int main(){
	int n,x,y;
	cin>>n;
	
	for(int i=0;i<n;i++){
		cin>>x;
		pre.push_back(x);
	}
	for(int i=0;i<n;i++){
		cin>>y;
		in.push_back(y);
	}
	
	int root=buildT(0,n-1,0,n-1);
	postOrder(root);
	
	for(int i=0;i<n;i++){
		cout<<post[i];
		if(i<n-1){
			cout<<" "; 
		}
	}
	
	return 0;
} 
