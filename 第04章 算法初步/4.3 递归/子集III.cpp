//对上一题的结果去重即可 
#include <cstdio>
#include <vector>
#include <algorithm>
#include<iostream>
using namespace std;

vector<vector<int> > result;
vector<int> temp;
int n;
int a[13];

void DFS(int idx) {
    if (idx == n + 1) {
        result.push_back(temp);
        return;
    }
    temp.push_back(a[idx]);
    DFS(idx + 1);
    temp.pop_back();
    DFS(idx + 1);
}

bool cmp(vector<int>& a, vector<int>& b) {
    if (a.size() != b.size()) {
        return a.size() < b.size();
    }
    else {
        return a < b;
    }
}

int main() {
    cin >> n;
    //int a[12];
    for (int i = 1;i <= n;i++) { //a[0]不存数据
        cin >> a[i];
    }
    DFS(1);
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
