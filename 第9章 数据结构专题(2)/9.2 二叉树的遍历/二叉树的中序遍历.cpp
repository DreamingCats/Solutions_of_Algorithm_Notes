#include <iostream>
#include <vector> 
using namespace std;

vector<int> in;

struct Node{
	int left;
	int right;
}node[50];

void inOrder(int root){
	if(root==-1){
		return;
	}
	else{
		inOrder(node[root].left);
		in.push_back(root);
		inOrder(node[root].right);
	}
}

int main(){
	int n,i;
	cin>>n;
	for(i=0;i<n;i++){
		cin>>node[i].left>>node[i].right;
	}
	
	inOrder(0); //root
	
	int len=in.size();
	for(i=0;i<len;i++){
		cout<<in[i];
		if(i<len-1){
			cout<<" ";
		}
	}
	
	return 0;
} 
