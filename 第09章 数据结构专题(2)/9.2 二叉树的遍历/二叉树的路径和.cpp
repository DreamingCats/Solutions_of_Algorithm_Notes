#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
const int maxn=50;
int ans=0; 

struct Node{
	int left;
	int right;
	int data;
}nodes[maxn];

void getSum(int root,int sum){
	if(root==-1){
		return;
	}
	
	sum+=nodes[root].data;
	if(nodes[root].left==-1 && nodes[root].right==-1){ //µ½Ò¶½áµã 
		ans+=sum;
	}
	else{
		getSum(nodes[root].left,sum);
		getSum(nodes[root].right,sum);
	}
}

int main(){
	int n,i;
	cin>>n;
	
	for(i=0;i<n;i++){
		cin>>nodes[i].data;
	}
	
	for(i=0;i<n;i++){
		cin>>nodes[i].left>>nodes[i].right;
	}
	
	getSum(0,0);
	cout<<ans;
	return 0;
}
