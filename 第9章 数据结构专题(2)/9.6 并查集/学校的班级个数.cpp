#include <iostream>
using namespace std;
const int maxn=100;
int  father[maxn];
bool isRoot[maxn];

int find(int x){
	if(x==father[x]){
		return x;
	}
	else{
		int f=find(father[x]);
		father[x]=f;
		return f;
	}
}

void _union(int a,int b){ //合并a和b所在的集合 
	int faA=find(a);
	int faB=find(b);
	if(faA!=faB){
		father[faA]=faB;
	}
}

void init(int n){
	for(int i=0;i<=n;i++){
		father[i]=i;
		isRoot[i]=false;
	}
}

int main(){
	int n,m;
	cin>>n>>m;
	
	init(n);
	int i,a,b;
	for(i=0;i<m;i++){
		cin>>a>>b;
		_union(a,b);
	}
	
	for(i=1;i<=n;i++){
		isRoot[find(i)]=true; //i的根节点 
	}
	
	int ans=0;
	for(i=1;i<=n;i++){
		ans+=isRoot[i];
	}
	
	cout<<ans; 
	return 0;
}
