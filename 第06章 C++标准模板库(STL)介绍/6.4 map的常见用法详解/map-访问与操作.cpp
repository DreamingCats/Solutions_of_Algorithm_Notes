#include <iostream>
#include <map>
#include <string>
using namespace std;
map<string,int> mp;
int main(){
	int n,i;
	string str;
	cin>>n;
	for (i = 0; i < n; i++) {
        cin >> str;
        if(mp.find(str)==mp.end()){
        	mp[str]=1;
		}
		else{
			mp[str]++;
		}
    }
    
    for (map<string, int>::iterator it = mp.begin(); it != mp.end(); it++) {
    	cout << it -> first << " " << it -> second << endl;
    }
	return 0;
}
