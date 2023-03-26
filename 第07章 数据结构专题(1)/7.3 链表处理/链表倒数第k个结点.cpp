#include <iostream>
using namespace std;
const int maxn=1001;

struct Node{
	int data;
	int next; 
} node[maxn]; 

bool needDel[maxn]={false}; 

int main(){
	int n,first,k;
	cin>>n>>first>>k;
	
	int id,i;
	for(i=0;i<n;i++){
		cin>>id;
		cin>>node[id].data>>node[id].next;
	}
	
	int fast=first;
	while(k--){
		fast=node[fast].next; //��ָ������k 
	}
	
	int slow=first;
	while(fast!=-1){
		slow=node[slow].next;
		fast=node[fast].next;
	} 
	
	//�����ָ�� 
	cout<<slow<<" "<<node[slow].data<<" "<<node[slow].next<<endl;
	
	return 0;
}
