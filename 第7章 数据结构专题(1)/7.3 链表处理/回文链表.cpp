#include <iostream>
using namespace std;
const int maxn=1000;

struct Node{
	int data;
	int next; 
} node[maxn]; 

int reverseList(int first){
	int current=first,last=-1;
	while(current!=-1){
		int next=node[current].next;
		node[current].next=last;
		last=current;
		current=next;
	}
	return last;
}

bool judge(int head1,int head2){
	while(head2!=-1){
		if(node[head1].data==node[head2].data){
			head1=node[head1].next;
			head2=node[head2].next;
		}
		else{
			return false;
		}
	}
	return true;
}

int main(){
	int n,first;
	cin>>n>>first;
	
	int id,i;
	for(i=0;i<n;i++){
		cin>>id;
		cin>>node[id].data>>node[id].next;
	}
	
	int fast=first,slow=first;
	while(node[fast].next!=-1&&node[node[fast].next].next!=-1){
		slow=node[slow].next;
		fast=node[node[fast].next].next;
	}
	
	int head=reverseList(node[slow].next);
	bool isReverse=judge(first,head);
	node[slow].next=reverseList(head);
	
	cout<<(isReverse?"Yes":"No");
	
	return 0;
}
