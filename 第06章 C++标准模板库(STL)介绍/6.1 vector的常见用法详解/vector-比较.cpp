#include <iostream>
#include <vector> 
using namespace std;
vector<int> v1,v2;
int main(){
	int n,m,x,i;
	cin>>n>>m;
	for(i=0;i<n;i++){
		cin>>x;
		v1.push_back(x);
	}
	for(i=0;i<m;i++){
		cin>>x;
		v2.push_back(x);
	}
	
	cout<<(v1<v2?"Yes":"No"); //从第一个元素开始比较 
	return 0;
}
