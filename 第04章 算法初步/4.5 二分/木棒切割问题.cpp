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
	for(j=min;j>=1;j--){ //�ӿ��ܵ����ֵ��ʼ���� 
		for(i=0;i<n;i++){
			sum+=a[i]/j;
		}
		if(sum>=k){  //�г���ľ���������ڵ��������� 
			maxlen=j;
			break;
		}
		//��������ˣ����ٳ��ȼ����� 
		sum=0;	
	}
	
	cout<<maxlen;
	return 0;
}
