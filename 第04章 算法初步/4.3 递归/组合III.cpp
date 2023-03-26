#include<iostream>
#include<cstdio>
#include<vector> 
#include <algorithm>

using namespace std;

const int maxn=13;
int n,k;
vector<vector<int> > result;
vector<int> temp;
int input[maxn];

void DFS(int index){
	if(temp.size()==k){
		result.push_back(temp);
		return;
	}
	if(index==n+1||temp.size()>k){
		return;
	}
	
	temp.push_back(input[index]);
	DFS(index+1);
	temp.pop_back();
	DFS(index+1); 
}


bool cmp(vector<int>& a, vector<int>& b) {
    if (a.size() != b.size()) {
        return a.size() < b.size();
    }
    else {
        return a < b;
    }
}


int main(){
	
	cin>>n>>k;
	for(int i=1;i<=n;i++){
		cin>>input[i];
	}
	
	DFS(1);
	
	
	//���Ԫ�� 
	/*
	for (int i = 0; i < result.size(); i++) {
        for (int j = 0; j < result[i].size(); j++) {
        	
        		cout<<result[i][j];
            	printf(j+1<result[i].size()?" ":"\n");
        } 
    }
    */
    
    sort(result.begin(), result.end(), cmp);
    
    for (int i = 0; i < result.size(); i++) {
        for (int j = 0; j < result[i].size(); j++) {
        	
        	if(i==0){
        		cout<<result[i][j];
            	if (j + 1 < result[i].size()) {
                	cout<<" ";
            	}
			}
        	else{
        		if(result[i]!=result[i-1]){ //���ʱ�����ظ�Ԫ�� 
        			cout<<result[i][j];
            		if (j + 1 < result[i].size()) {
                		cout<<" ";
            		} 
				}
			}
        }
        if(i==0||(i!=0&&result[i]!=result[i-1])){ //�����ظ�Ԫ��ʱ������ո� 
        	cout<<endl;
		}
	}
	return 0;
}
