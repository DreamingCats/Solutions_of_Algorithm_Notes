#include <iostream>
using namespace std;

const int maxn=100;
int G[maxn][maxn]={0};

int main(){
	int n,m;
	cin>>n>>m;
	
	int i,j,u,v;
	for(i=0;i<m;i++){
		cin>>u>>v;
		G[u][v]=1; //споРм╪ 
		//G[v][u]=1;
	}
	
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			cout<<G[i][j];
			cout<<(j<n-1?" ":"\n") ;
		}
	}
	return 0;
}
