#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
const int maxn=50;
int ans=0; 

struct Node{
	int data;
	vector<int> child;
}nodes[maxn];

void getSum(int root,int sum){
	sum+=nodes[root].data;
	
	if(nodes[root].child.empty()){
		ans+=sum;
	}
	
	for(int i=0;i<nodes[root].child.size();i++){
		getSum(nodes[root].child[i],sum);
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
	
	getSum(0,0);
	cout<<ans;

	return 0;
} 
