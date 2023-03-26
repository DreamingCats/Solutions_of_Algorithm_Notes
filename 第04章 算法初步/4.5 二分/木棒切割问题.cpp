#include <iostream>
#include <algorithm>
using namespace std;

const int maxn=1000;
int a[maxn];

int main(){
	int n,k;
	cin>>n>>k;
	int i,j;
	for(i=0;i<n;i++){
		cin>>a[i];
	}
	
	sort(a,a+n);
	int min=a[0];
	
	int sum=0,maxlen=0;
	for(j=min;j>=1;j--){ //从可能的最大值开始测试 
		for(i=0;i<n;i++){
			sum+=a[i]/j;
		}
		if(sum>=k){  //切出的木棒数量大于等于期望的 
			maxlen=j;
			break;
		}
		//如果切少了，减少长度继续试 
		sum=0;	
	}
	
	cout<<maxlen;
	return 0;
}
