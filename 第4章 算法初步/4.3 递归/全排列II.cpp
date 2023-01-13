#include<iostream>
using namespace std;

const int maxn=9; //8+1
int n;
int input[maxn], p[maxn];
bool hash[maxn]={false};

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
		if(::hash[x]==false){
			p[index]=input[x-1]; //改下上一题的输入即可 
			::hash[x]=true;
			Ann(index+1);
			::hash[x]=false;
			//不加这两个冒号的话，OJ会报错，但本地运行没问题 
		}
	}
}

int main(){
	
	//int n;
	cin>>n;
	for(int k=0;k<n;k++){
		cin>>input[k];
	}
	Ann(1);
	
	return 0;
} 
