//�����������������ж��Ƿ�Ϊ�������м��ɡ� 
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
