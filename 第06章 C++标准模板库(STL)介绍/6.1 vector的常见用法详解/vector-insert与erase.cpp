#include <iostream>
#include <vector> 
using namespace std;
int main(){
	int n,a;
	cin>>n;
	vector<int> v;
	
	for(int i=0;i<n;i++){
		cin>>a;
		v.push_back(a);
	}
	
	int x,k1,k2;
	cin>>x>>k1>>k2;
	v.insert(v.begin()+k1,x);
	v.erase(v.begin()+k2);
	
	for(int j=0;j<v.size();j++){ //Êä³ö 
		cout<<v[j];
		if(j!=v.size()-1){
			cout<<" ";
		}
	}
	return 0;
}
