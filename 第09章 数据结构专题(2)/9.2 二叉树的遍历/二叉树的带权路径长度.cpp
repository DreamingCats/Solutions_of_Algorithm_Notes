#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
const int maxn=50;
int WPL=0; 

struct Node{
	int left;
	int right;
	int data;
}nodes[maxn];

void getWPL(int root,int len){
	if(root==-1){
		return;
	}
	
	if(nodes[root].left==-1 && nodes[root].right==-1){ //µ½Ò¶½áµã 
		WPL+=nodes[root].data*len;
	}
	else{
		len++;
		getWPL(nodes[root].left,len);
		getWPL(nodes[root].right,len);
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
	
	getWPL(0,0);
	cout<<WPL;
	return 0;
}
