#include <iostream>
#include <vector>
using namespace std;
 
struct Node{
	vector<int> child;
}nodes[50];

vector<int> pre,post;

void preOrder(int root){
	pre.push_back(root);
	
	for(int i=0;i<nodes[root].child.size();i++){
		preOrder(nodes[root].child[i]);
	}
}

void postOrder(int root){
	for(int i=0;i<nodes[root].child.size();i++){
		postOrder(nodes[root].child[i]);
	}
	
	post.push_back(root);
}

int main(){
	int n,k,x;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>k;
		for(int j=0;j<k;j++){
			cin>>x;
			nodes[i].child.push_back(x);
		}
	}
	
	postOrder(0);
	
	for(int i=0;i<n;i++){
		cout<<post[i];
		if(i<n-1){
			cout<<" ";
		}
	}
	
	return 0;
}
