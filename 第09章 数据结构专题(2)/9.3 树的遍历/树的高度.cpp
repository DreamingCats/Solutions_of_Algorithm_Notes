#include <iostream>
#include <vector>
#include <algorithm> 
#include <cmath>
using namespace std;
const int maxn=50;

struct Node{
	vector<int> child;
}nodes[maxn];

int getH(int root){ //获取高度 
	int maxH=0;
	for(int i=0;i<nodes[root].child.size();i++){
		maxH=max(maxH,getH(nodes[root].child[i]));
	}
	return maxH+1;
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
	
	cout<<getH(0);
	return 0;
} 
