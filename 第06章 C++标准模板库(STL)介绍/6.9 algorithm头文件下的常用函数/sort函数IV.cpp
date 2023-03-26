#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

struct Node{
	int x,y;
	Node(int _x,int _y){
		x=_x;
		y=_y;
	}
};

bool cmp(Node a,Node b){
	if(a.x!=b.x){
		return a.x<b.x;
	}
	else{
		return a.y<b.y;
	}
}

int main(){
	int n,x,y,i;
	cin>>n;
	
	vector<Node> v;
	
	for(i=0;i<n;i++){
		cin>>x>>y;
		v.push_back(Node(x,y));
	}
	
	sort(v.begin(),v.end(),cmp);
	
	for(i=0;i<n;i++){
		cout<<v[i].x<<" "<<v[i].y<<endl;
	}
	
	return 0;	
}
