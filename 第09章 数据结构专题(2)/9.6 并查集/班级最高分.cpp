#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
const int maxn=100;
int  father[maxn],score[maxn];
vector<int> classes;

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
		if(score[faA]<score[faB]){
			father[faA]=faB;
		}
		else{
			father[faB]=faA;
		}
	}
}

void init(int n){
	for(int i=1;i<=n;i++){
		father[i]=i;
	}
}

int main(){
	int n,m;
	cin>>n>>m;
	
	init(n);
	
	int i;
	for(i=1;i<=n;i++){
		cin>>score[i];
	}
	
	int a,b;
	for(i=0;i<m;i++){
		cin>>a>>b;
		_union(a,b);
	}
	
	
	for(i=1;i<=n;i++){
		if(find(i)==i){
			classes.push_back(score[i]);
		}
	}
	
	sort(classes.rbegin(),classes.rend());
	
	int classNum=classes.size();
	cout<<classNum<<endl; 
	
	for(i=0;i<classNum;i++){
		cout<<classes[i];
		if(i<classNum-1){
			cout<<" ";
		}
	}
	
	return 0;
}
