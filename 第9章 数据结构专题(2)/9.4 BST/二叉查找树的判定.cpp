//给出中序遍历结果，判断是否为递增序列即可。 
#include <iostream>
#include <algorithm>
using namespace std;
const int maxn=50;
int a[maxn];
bool isBST=true;

int main(){
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	
	for(int i=1;i<n;i++){
		if(a[i]<a[i-1]){
			isBST=false;
		}
	}
	
	cout<<(isBST?"Yes":"No");
}
