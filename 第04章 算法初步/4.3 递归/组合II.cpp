#include<iostream>
#include<cstdio>
#include<vector> 

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

int main(){
	
	cin>>n>>k;
	for(int i=1;i<=n;i++){
		cin>>input[i];
	}
	
	DFS(1);
	
	
	//Êä³öÔªËØ 
	for (int i = 0; i < result.size(); i++) {
        for (int j = 0; j < result[i].size(); j++) {
        	
        		cout<<result[i][j];
            	printf(j+1<result[i].size()?" ":"\n");
        } 
    }
	
	return 0;
}
