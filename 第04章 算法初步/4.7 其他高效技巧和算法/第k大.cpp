//������Ŀ�������ˣ�Ӧ���ǵ�kС
#include <iostream>
#include <algorithm>
const int maxn=100000;
int a[maxn];
using namespace std;

int main(){
	int n,k,i;
	cin>>n>>k;
	for(i=0;i<n;i++){
		cin>>a[i];
	}
	
	sort(a,a+n);
	cout<<a[k-1];
	
	return 0;
} 
//33ms
