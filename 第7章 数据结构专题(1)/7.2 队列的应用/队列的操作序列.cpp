#include <iostream>
#include <queue>
#include <string>

using namespace std;
int main(){
	int n,i,x;
	cin>>n;
	queue<int> q;
	string str;
	for(i=0;i<n;i++){
		cin>>str;
		if(str=="push"){
			cin>>x;
			q.push(x);
		}
		if(str=="pop"){
			if(q.empty()){
				cout<<"-1"<<endl;
			}
			else{
				cout<<q.front()<<endl;
				q.pop();
			}
		}
	}
	
	return 0;
} 
