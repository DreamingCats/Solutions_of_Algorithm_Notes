#include<iostream>
using namespace std;
int main() {
	int n;
	cin >> n;
	int ans[20];
	int num = 0;
	do {
		ans[num] = n % 2;
		num++;
		n = n / 2;
	} while (n != 0);
	for (int i = num-1;i >= 0;i--) { //·´ÏòÊä³ö
		cout << ans[i];
	}
	return 0;
}
