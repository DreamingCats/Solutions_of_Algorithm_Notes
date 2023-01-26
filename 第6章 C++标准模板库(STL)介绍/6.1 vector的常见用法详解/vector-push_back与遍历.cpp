#include <iostream>
#include <vector> 
using namespace std;
vector<int> v;
int main(){
	int n,x;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>x;
		v.push_back(x);
	}
	for(int j=0;j<v.size();j++){
		cout<<v[j];
		if(j!=v.size()-1){
			cout<<" ";
		}
	}
	return 0;
}
