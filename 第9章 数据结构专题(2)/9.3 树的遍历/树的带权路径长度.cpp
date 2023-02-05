#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
const int maxn=50;
int WPL=0; 

struct Node{
	vector<int> child; 
	int data;
}nodes[maxn];

void getWPL(int root,int cnt){
	if(nodes[root].child.empty()){
		WPL+=nodes[root].data*cnt;
	}
	for(int i=0;i<nodes[root].child.size();i++){
		getWPL(nodes[root].child[i],cnt+1);
	}
}

int main(){
	int n,k,x;
	cin>>n;
	
	for(int i=0;i<n;i++){
		cin>>nodes[i].data;
	}
	
	for(int i=0;i<n;i++){
		cin>>k;
		for(int j=0;j<k;j++){
			cin>>x;
			nodes[i].child.push_back(x);
		}
	} 
	
	getWPL(0,0);
	cout<<WPL;

	return 0;
}
