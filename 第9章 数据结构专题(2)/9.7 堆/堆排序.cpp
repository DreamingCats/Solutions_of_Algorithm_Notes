#include <iostream>
#include <algorithm>
using namespace std;
const int maxn=100;
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

void deleteTop(int n){
	heap[1]=heap[n--];
	downAdjust(1,n);
}

void heapSort(int n){
	createDownHeap(n);
	for(int i=n;i>1;i--){
		swap(heap[i],heap[1]);
		downAdjust(1,i-1); //调整堆顶 
	}
}

int main(){
	int n,i;
	cin>>n;
	for(i=1;i<=n;i++){
		cin>>heap[i];
	}
	
	heapSort(n);
	
	
	
	for(i=1;i<=n;i++){
		cout<<heap[i];
		if(i<=n-1){
			cout<<" ";
		}
	}
	return 0;
}
