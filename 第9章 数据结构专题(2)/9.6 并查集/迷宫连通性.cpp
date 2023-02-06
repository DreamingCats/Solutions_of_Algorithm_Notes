#include <iostream>
#include<bits/stdc++.h>
using namespace std;
const int maxn=100000;
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
	
	bool isLink=true;
	for(i=2;i<=n;i++){
		if(find(i)!=find(1)){ //不连接 
			isLink=false;
		}
	}
	
	cout<<(isLink?"Yes":"No");
	return 0;
}
