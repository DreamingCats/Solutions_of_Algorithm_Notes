#include<iostream>
using namespace std;

const int maxn=8;
int n;
int p[maxn];
int hash[maxn]={0};

void Ann(int index){
	if(index==n+1){
		for(int i=1;i<=n;i++){
			cout<<p[i];
			if(i<n){
				cout<<" ";
			}
		}
		cout<<endl;
		return;
	}
	
	for(int x=1;x<=n;x++){
		if(::hash[x]==0){
			p[index]=x;
			::hash[x]=1;
			Ann(index+1);
			::hash[x]=0;
			/*
			����������ð�ŵĻ���OJ�ᱨ������������û���� 
			*/
		}
	}
}

int main(){
	
	//int n;
	cin>>n;
	Ann(1);
	
	return 0;
} 
