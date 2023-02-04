//ÏÈĞò±éÀú£º¸ù×óÓÒ 
#include <iostream>
#include <vector> 
using namespace std;

vector<int> pre;

struct Node{
	int left;
	int right;
}node[50];

void preOrder(int root){
	if(root==-1){
		return;
	}
	else{
		pre.push_back(root);
		preOrder(node[root].left);
		preOrder(node[root].right);
	}
}

int main(){
	int n,i;
	cin>>n;
	for(i=0;i<n;i++){
		cin>>node[i].left>>node[i].right;
	}
	
	preOrder(0); //root
	
	int len=pre.size();
	for(i=0;i<len;i++){
		cout<<pre[i];
		if(i<len-1){
			cout<<" ";
		}
	}
	
	return 0;
} 
