#include <iostream>
#include <queue>
using namespace std;
priority_queue<int,vector<int>,greater<int>> q;
int cnt[26]={0};

int main(){
	string str; 
	cin>>str;
	for(int i=0;i<str.length();i++){
		cnt[str[i]-'A']++;
	}
	
	for(int i=0;i<26;i++){
		if(cnt[i]>0){
			q.push(cnt[i]);
		}
	}
	
	int ans=0;
	while(q.size()>1){
		int top1=q.top();
		q.pop();
		
		int top2=q.top();
		q.pop();
		
		int add=top1+top2;
		q.push(add);
		ans+=add;
	}
	
	cout<<ans;
	return 0;
}
