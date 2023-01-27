#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main(){
	vector<int> v;
	int n,x,i;
	cin>>n;
	for(i=0;i<n;i++){
		cin>>x;
		v.push_back(x);
	}
	
	reverse(v.begin(),v.end());
	
	for (i = 0; i < (int)v.size(); i++) {
        cout<<v[i];
        if (i < (int)v.size() - 1) {
            cout<<" ";
        }
    }
	
	return 0;
}
