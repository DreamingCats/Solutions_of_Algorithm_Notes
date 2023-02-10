#include <iostream>
#include <vector>
using namespace std;

const int maxn=100;
vector<int> G[maxn];

int main(){
	int n,m;
	cin>>n>>m;
	
	int i,j,u,v;
	for(i=0;i<m;i++){
		cin>>u>>v;
		G[u].push_back(v);
		G[v].push_back(u);
	}
	
	for(i=0;i<n;i++){
		int num=G[i].size();
		cout<<i<<"("<<num<<")";
		for(j=0;j<num;j++){
			cout<<" "<<G[i][j];
		}
		cout<<endl;
	}
	return 0;
}
