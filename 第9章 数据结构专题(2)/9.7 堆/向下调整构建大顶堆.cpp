#include <iostream>
#include <algorithm>
using namespace std;
const int maxn=1000;
int heap[maxn];

void downAdjust(int low,int high){ //向下调整 
	int i=low,j=i*2; //i为欲调整结点，j为左孩子
	while(j<=high){ //存在孩子结点 
		if(j+1<=high && heap[j+1]>heap[j]){ //如果右孩子存在，且右孩子值大于左孩子 
			j++; //让j存储右孩子下标 
		}
		
		//孩子中最大的权值比欲调整结点i大 
		if(heap[j]>heap[i]){
			swap(heap[j],heap[i]);
			//保持i为欲调整结点，j为i的左孩子 
			i=j;
			j=i*2;
		}
		else{
			break;
		}
	} 
}

void upAdjust(int low,int high){
	int i=high,j=i/2;
	while(j>=low){
		if(heap[j]<heap[i]){
			swap(heap[j],heap[i]);
			i=j;
			j=i/2;
		}
		else{
			break;
		}
	}
} 

void createDownHeap(int n){
	for(int i=n/2;i>0;i--){
		downAdjust(i,n);
	}
}

void createUpHeap(int n){
	for(int i=2;i<=n;i++){
		upAdjust(1,i);
	}
}

int main(){
	int n,i;
	cin>>n;
	for(i=1;i<=n;i++){
		cin>>heap[i];
	}
	
	createDownHeap(n);
	
	for(i=1;i<=n;i++){
		cout<<heap[i];
		if(i<n){
			cout<<" ";
		}
	}
	return 0;
}
