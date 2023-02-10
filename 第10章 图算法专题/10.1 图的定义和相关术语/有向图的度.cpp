#include <iostream>
using namespace std;

const int maxn=100;
int inD[maxn]={0},outD[maxn]={0};

int main(){
	int n,m;
	cin>>n>>m;
	
	int i,u,v;
	for(i=0;i<m;i++){
		cin>>u>>v;
		outD[u]++;
		inD[v]++;
	}
	
	for(i=0;i<n;i++){
		cout<<inD[i]<<" "<<outD[i]<<endl;
	}
	return 0;
}
