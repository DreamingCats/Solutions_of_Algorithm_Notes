#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;

const int maxn=100;
int n;
char input[maxn], p[maxn];
bool hash[maxn]={false};
string str;

//˼·��������ȫ���� 

void Ann(int index){
	if(index==n+1){
		for(int i=1;i<=n;i++){
			cout<<p[i];
			
		}
		cout<<endl;
		return;
	}
	
	for(int x=1;x<=n;x++){
		if(::hash[x]==false){
			p[index]=input[x-1]; 
			::hash[x]=true;
			Ann(index+1);
			::hash[x]=false;
			
		}
	}
}

int main(){
	
	cin>>str;
	strcpy(input,str.c_str()); //�õ� c_str()����,stringתchar 
	n=strlen(input); 
	sort(input,input+n);  //��������������ǰ����ֵ���� 
	
	Ann(1);
	
	return 0;
} 
