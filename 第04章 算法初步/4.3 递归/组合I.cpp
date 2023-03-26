#include<iostream>
#include<vector> 

using namespace std;

int n,k;
vector<vector<int> > result;
vector<int> temp;

void DFS(int index){
	if(temp.size()==k){
		result.push_back(temp);
		return;
	}
	if(index==n+1||temp.size()>k){
		return;
	}
	
	temp.push_back(index);
	DFS(index+1);
	temp.pop_back();
	DFS(index+1); 
}

int main(){
	
	cin>>n>>k;
	
	DFS(1);
	
	
	//输出元素 
	for (int i = 0; i < result.size(); i++) {
        for (int j = 0; j < result[i].size(); j++) {
        	
        	if(i==0){
        		cout<<result[i][j];
            	if (j + 1 < result[i].size()) {
                	cout<<" ";
            	}
			}
        	else{
        		if(result[i]!=result[i-1]){ //输出时跳过重复元素 
        			cout<<result[i][j];
            		if (j + 1 < result[i].size()) {
                		cout<<" ";
            		} 
				}
			}
        }
        if(i==0||(i!=0&&result[i]!=result[i-1])){ //遇到重复元素时不输出空格 
        	cout<<endl;
		}
        
    }
	
	return 0;
}
