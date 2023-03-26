//暴力解 
#include<iostream>
#include<algorithm>
using namespace std;

const int maxn=10001;
int a[maxn]={0},b[maxn]={0};

int main(){
	int n,m;
	cin>>n>>m;
	int i,j;

	for(i=0;i<n;i++){
		cin>>a[i];
	}
	for(j=0;j<m;j++){
		cin>>b[j];
	}
	
	sort(a,a+n);
	sort(b,b+m);
	
	int x,y;
	int cnt=0;
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			if(a[i]<=b[j]&&a[i]!=0&&b[j]!=0){
				//置0表示将两个数取出 
				a[i]=0;
				b[j]=0;
				cnt++;
			}
		}
	}
	
	cout<<cnt;
	return 0;
} 
