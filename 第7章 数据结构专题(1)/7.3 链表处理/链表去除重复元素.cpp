#include <iostream>
using namespace std;
const int maxn=1001;

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
	
	int current=first,last=-1,next;
	while(current!=-1){
		if(needDel[node[current].data]){
			node[last].next=node[current].next;
			
		}
		else{
			needDel[node[current].data]=true;
			last=current;
			//current=node[current].next;
		}
		current=node[current].next;
	}
	
	current=first;
	while(current!=-1){
		cout<<current<<" "<<node[current].data<<" "<<node[current].next<<endl;
		current=node[current].next;
	}
	
	return 0;
}
