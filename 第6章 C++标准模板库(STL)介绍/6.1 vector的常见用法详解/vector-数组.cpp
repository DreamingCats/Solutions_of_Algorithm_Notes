#include <iostream>
#include <vector> 
using namespace std;
vector<int> v;
int main(){
	int n,k,x,i;
	cin>>n;
	
	while(n--){
		cin>>k;
		for(i=0;i<k;i++){
			cin>>x;
			v.push_back(x);
		}
		for(int i=0;i<v.size();i++){
			cout<<v[i]<<(i<v.size()-1?" ":"\n");
		}
		v.clear();
	} 
	
	return 0;
}
