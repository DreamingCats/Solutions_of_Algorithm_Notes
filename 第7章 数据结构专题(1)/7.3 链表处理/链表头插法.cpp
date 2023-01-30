#include <iostream>
using namespace std;
const int maxn=1000;

struct Node{
	int data;
	int next; 
} node[maxn]; 

int main(){
	int n,first;
	cin>>n>>first;
	
	int id,i;
	for(i=0;i<n;i++){
		cin>>id;
		cin>>node[id].data>>node[id].next;
	}
	
	int m;
	cin>>m;
	for(i=0;i<m;i++){
		cin>>id>>node[id].data;
		node[id].next=first;
		first=id;
	}
	
	int current=first,cnt=0;
	while(current!=-1){
		cout<<current<<" "<<node[current].data<<" "<<node[current].next<<endl;
		cnt++;
		current=node[current].next;
	}
	
	//cout<<cnt;
	return 0;
}
