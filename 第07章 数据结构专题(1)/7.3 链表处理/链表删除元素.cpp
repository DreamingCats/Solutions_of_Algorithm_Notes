#include <iostream>
using namespace std;
const int maxn=1000;

struct Node{
	int data;
	int next; 
} node[maxn]; 

int main(){
	int n,first,k;
	cin>>n>>first>>k;
	
	int id,i;
	for(i=0;i<n;i++){
		cin>>id;
		cin>>node[id].data>>node[id].next;
	}
	
	int current=first,last=0;
	while(current!=-1){
		if(node[current].data==k){
			if(current==first){
				first=node[current].next;
			}
			node[last].next=node[current].next;
			current=node[last].next;
		}
		else{
			last=current;
			current=node[current].next;
		}
	}
	
	current=first;
	while(current!=-1){
		cout<<current<<" "<<node[current].data<<" "<<node[current].next<<endl;
		current=node[current].next;
	}
	
	return 0;
}
