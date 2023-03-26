//前面写过，直接粘过来了 
#include<iostream>
#include<cstring>
using namespace std;

#define maxsize 10000
string str1[10000];
string str2[10000];
string ans[10000];

int main() {
	int n, m;
	cin >> n >> m;
	for (int i = 0;i < n;i++) {
		cin >> str1[i];
	}
	for (int j = 0;j < m;j++) {
		cin >> str2[j];
	}
	int k = 0;
	for (int i = 0;i < n;i++) {
		for (int j = 0;j < m;j++) {
			if (str1[i] == str2[j]) {
				ans[k]=str1[i];
				k++;
				//cout << str1[i] << " ";
				break;
			}
		}
	}
	
	for (int i = 0;i < k;i++) {
		cout << ans[i];
		if (i < k - 1) {
			cout << " ";
		}
	}
	
	return 0;
}
