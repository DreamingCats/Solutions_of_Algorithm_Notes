#include <iostream>
#include <map>
using namespace std;
int main(){
	int n,x;
	char c,k;
	cin>>n;
	map<char,int> mp;
	for (int i = 0; i < n; i++) {
        cin >> c >> x;
        mp[c] = x;
    }
	
	cout<<mp.size()<<" ";
	
    mp.clear();
    cout<<mp.size();
    /*
	for (map<char, int>::iterator it = mp.begin(); it != mp.end(); it++) {
    	cout << it -> first << " " << it -> second << endl;
    }
    */
	return 0; 
} 
