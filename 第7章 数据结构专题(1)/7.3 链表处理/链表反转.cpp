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
	
	int current=first,last=-1,next;
	while(current!=-1){
		next=node[current].next;
		node[current].next=last;
		last=current;
		current=next;
	}
	
	current=last;
	while(current!=-1){
		cout<<current<<" "<<node[current].data<<" "<<node[current].next<<endl;
		current=node[current].next;
	}
	
	return 0;
}
