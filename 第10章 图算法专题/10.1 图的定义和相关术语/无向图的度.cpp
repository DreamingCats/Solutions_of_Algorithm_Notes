#include <iostream>
using namespace std;

const int maxn=100;
int d[maxn]={0};

int main(){
	int n,m;
	cin>>n>>m;
	
	int i,u,v;
	for(i=0;i<m;i++){
		cin>>u>>v;
		d[u]++;
		d[v]++;
	}
	
	for(i=0;i<n;i++){
		cout<<d[i];
		if(i<n-1){
			cout<<" ";
		}
	}
	return 0;
}
