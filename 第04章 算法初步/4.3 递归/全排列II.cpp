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
			p[index]=input[x-1]; //������һ������뼴�� 
			::hash[x]=true;
			Ann(index+1);
			::hash[x]=false;
			//����������ð�ŵĻ���OJ�ᱨ������������û���� 
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
