#include<iostream>
#include<cstring>
using namespace std;

void ans(int n) {
	
	if (n == 0){
		cout<<"我的小鲤鱼";
	}
	else {
		cout << "抱着";
		ans(n - 1);
		cout << "的我";
	}
}

int main() {
	int n;
	cin >> n;
	cout << "吓得我抱起了";
	ans(n);

	
	return 0;
}
