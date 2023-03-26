#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <queue>
using namespace std;
priority_queue<int,vector<int>,greater<int>> q; 

int main(){
	int n,k,x;
	cin>>n>>k;
	string str;
	
	for(int i=0;i<n;i++){
		cin>>str;
		if(str=="Push"){
			cin>>x;
			q.push(x);
			if(q.size()>k){
				q.pop();
			}
		}
		else if(str=="Print"){
			if(q.size()>=k){
				cout<<q.top()<<endl;
			}
			else{
				cout<<-1<<endl;
			}
		}
	}
	
	return 0;
}
