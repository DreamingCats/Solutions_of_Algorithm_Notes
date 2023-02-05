#include <iostream>
#include <vector>
using namespace std;
 
struct Node{
	vector<int> child;
}nodes[50];

vector<int> pre;

void preOrder(int root){
	pre.push_back(root);
	
	for(int i=0;i<nodes[root].child.size();i++){
		preOrder(nodes[root].child[i]);
	}
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
	
	preOrder(0);
	
	for(int i=0;i<n;i++){
		cout<<pre[i];
		if(i<n-1){
			cout<<" ";
		}
	}
	
	return 0;
}
