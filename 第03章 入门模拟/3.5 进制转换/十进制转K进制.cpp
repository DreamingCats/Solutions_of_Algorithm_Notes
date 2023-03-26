#include<iostream>
using namespace std;
int main() {
	int n;
	cin >> n;
    int K;
    cin>>K;
	int ans[20];
	int num = 0;
	do {
		ans[num] = n % K;
		num++;
		n = n / K;
	} while (n != 0);
	for (int i = num-1;i >= 0;i--) {
		if (ans[i] < 10) {
			cout << ans[i];
		}
		else{
			printf("%c", ans[i] +55);  //Êä³ö´óÐ´ABCDEF 
		}
	}
	return 0;
}
