#include <iostream>
#include <algorithm>
using namespace std;
const int maxn=1000;
int heap[maxn];

void downAdjust(int low,int high){ //���µ��� 
	int i=low,j=i*2; //iΪ��������㣬jΪ����
	while(j<=high){ //���ں��ӽ�� 
		if(j+1<=high && heap[j+1]>heap[j]){ //����Һ��Ӵ��ڣ����Һ���ֵ�������� 
			j++; //��j�洢�Һ����±� 
		}
		
		//����������Ȩֵ�����������i�� 
		if(heap[j]>heap[i]){
			swap(heap[j],heap[i]);
			//����iΪ��������㣬jΪi������ 
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
