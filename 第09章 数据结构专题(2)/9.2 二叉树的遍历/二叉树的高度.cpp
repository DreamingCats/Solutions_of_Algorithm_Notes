#include <iostream>
#include <cmath>
#include <algorithm> 
using namespace std;
const int maxn=50;

struct Node{
	int left;
	int right;
}node[maxn];

int getH(int root){ //获取高度 
	if(root==-1){
		return 0;
	}
	else{
		int leftH=getH(node[root].left);
		int rightH=getH(node[root].right);
		return max(leftH,rightH)+1;
	}
}

int main(){
	int n;
	cin>>n;
	
	for(int i=0;i<n;i++){
		cin>>node[i].left>>node[i].right;
	} 
	
	cout<<getH(0);
	return 0;
} 
