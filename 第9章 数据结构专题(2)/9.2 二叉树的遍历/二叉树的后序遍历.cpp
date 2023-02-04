#include <iostream>
#include <vector> 
using namespace std;

vector<int> post;

struct Node{
	int left;
	int right;
}node[50];

void postOrder(int root){
	if(root==-1){
		return;
	}
	else{
		postOrder(node[root].left);
		postOrder(node[root].right);
		post.push_back(root);
	}
}

int main(){
	int n,i;
	cin>>n;
	for(i=0;i<n;i++){
		cin>>node[i].left>>node[i].right;
	}
	
	postOrder(0); //root
	
	int len=post.size();
	for(i=0;i<len;i++){
		cout<<post[i];
		if(i<len-1){
			cout<<" ";
		}
	}
	
	return 0;
} 
