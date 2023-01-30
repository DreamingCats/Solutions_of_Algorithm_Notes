#include <iostream>
using namespace std;
const int maxn=100;

struct Node{
	int data;
	int next; 
} node[maxn]; 

bool needDel[maxn]={false}; 

int main(){
	int n,first;
	cin>>n>>first;
	
	int id,i;
	for(i=0;i<n;i++){
		cin>>id;
		cin>>node[id].data>>node[id].next;
	}
	
	int fast=first,slow=first; //¿ìÂýÖ¸Õë 
	while(node[fast].next!=-1&&node[node[fast].next].next!=-1){
		slow=node[slow].next;
		fast=node[node[fast].next].next;
	}
	
	double mid;
	if(node[fast].next==-1){
		mid=node[slow].data;
	}
	else{
		mid=(double)(node[slow].data + node[node[slow].next].data) / 2;
	}
	
	printf("%.1f",mid);
	return 0;
}
