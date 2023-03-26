#include <iostream>
#include <algorithm>
#include <vector>
#include <map>
using namespace std;
const int maxn=50;

struct Node{
	int left;
	int right;
}nodes[maxn];

vector<int> pre,in,post,layer;

//��������ԭ������ 
int buildT1(int preL,int preR,int inL,int inR){
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
	nodes[root].left=buildT1(preL+1,preL+leftCount,inL,inIndexOfRoot-1);
	nodes[root].right=buildT1(preL+leftCount+1,preR,inIndexOfRoot+1,inR);
	return root;
}

//��������ԭ������
int buildT2(int postL,int postR,int inL,int inR){
	if(postL>postR){
		return -1;
	} 
	
	int root=post[postR];
	int inIndexOfRoot;
	for(int i=inL;i<=inR;i++){
		if(in[i]==root){
			inIndexOfRoot=i;
			break;
		}
	}
	
	int leftCount=inIndexOfRoot-inL;
	nodes[root].left=buildT2(postL,postL+leftCount-1,inL,inIndexOfRoot-1);
	nodes[root].right=buildT2(postL+leftCount,postR-1,inIndexOfRoot+1,inR);
	return root;
} 

//��������ԭ������
int buildT3(vector<int> layer,int inL,int inR){
	if(layer.empty()){
		return -1;
	}
	
	int root=layer[0];
	map<int,bool> isLeft;
	int inIndexOfRoot;
	for(int i=inL;i<=inR;i++){
		if(in[i]==root){
			inIndexOfRoot=i;
			break;
		}
		else{
			isLeft[in[i]]=true;
		}
	}
	
	vector<int> leftLayer,rightLayer;
	for(int i=1;i<layer.size();i++){
		if(isLeft[layer[i]]){
			leftLayer.push_back(layer[i]);
		}
		else{
			rightLayer.push_back(layer[i]);
		}
	}
	
	nodes[root].left=buildT3(leftLayer,inL,inIndexOfRoot-1);
	nodes[root].right=buildT3(rightLayer,inIndexOfRoot+1,inR);
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
		layer.push_back(x);
	}
	for(int i=0;i<n;i++){
		cin>>y;
		in.push_back(y);
	}
	
	int root=buildT3(layer,0,n-1);
	preOrder(root);
	
	for(int i=0;i<n;i++){
		cout<<pre[i];
		if(i<n-1){
			cout<<" "; 
		}
	}
	
	return 0;
} 
