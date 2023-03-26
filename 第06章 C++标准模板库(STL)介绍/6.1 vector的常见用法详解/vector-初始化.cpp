#include <iostream>
#include <vector> 
using namespace std;
int main(){
	int n,k;
	cin>>n>>k;
	vector<int> v(n, k);
	for(int j=0;j<v.size();j++){
		cout<<v[j];
		if(j!=v.size()-1){
			cout<<" ";
		}
	}
	return 0;
}
