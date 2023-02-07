#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <queue>
using namespace std;

/*
int a[10000];

double getMid(int a[],int num){
	sort(a,a+num);
	if(num%2==1){
		return a[(num+1)/2-1];
	}
	else{
		return (double)(a[num/2-1]+a[num/2])/2;
	}
}

int main(){
	int n,x;
	cin>>n;
	string str;
	int num=0;
	for(int i=0;i<n;i++){
		cin>>str;
		if(str=="Push"){
			cin>>a[i];
			num++;
			
		}
		else if(str=="Print"){
			printf("%.1f\n",getMid(a,num));
		}
		else{
			break;
		}
	}
	
	return 0;
}
*/

priority_queue<int,vector<int>> maxQ;
priority_queue<int,vector<int>,greater<int>> minQ;

int main(){
	int n,x;
	cin>>n;
	
	string str;
	for(int i=0;i<n;i++){
		cin>>str;
		if(str=="Push"){
			cin>>x;
			if(maxQ.empty()||x<=maxQ.top()){
				maxQ.push(x);
				if(maxQ.size()-minQ.size()>1){
					minQ.push(maxQ.top());
					maxQ.pop(); 
				}
			}
			else{
				minQ.push(x);
				if(minQ.size()>maxQ.size()){
					maxQ.push(minQ.top());
					minQ.pop();
				}
			}
		}
		else if(str=="Print"){
			double ans;
			if(maxQ.size()>minQ.size()){
				ans=maxQ.top();
			}
			else{
				ans=(maxQ.top()+minQ.top())/2.0;
			}
			printf("%.1f\n",ans);
		}
	}
	return 0;
}
