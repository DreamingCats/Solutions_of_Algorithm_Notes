#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
const int maxn=100;
int  father[maxn],studentCount[maxn]={0};
bool isRoot[maxn];
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
		studentCount[find(i)]++;
	}
	
	int classNum=0;
	for(i=1;i<=n;i++){
		classNum+=isRoot[i];
		if(studentCount[i]>0){
			classes.push_back(studentCount[i]);
		}
	}
	sort(classes.rbegin(),classes.rbegin()+classNum);
	
	cout<<classNum<<endl; 
	
	for(i=0;i<classNum;i++){
		cout<<classes[i];
		if(i<classNum-1){
			cout<<" ";
		}
	}
	
	return 0;
}
