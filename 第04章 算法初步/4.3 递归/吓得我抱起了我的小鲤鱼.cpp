#include<iostream>
#include<cstring>
using namespace std;

void ans(int n) {
	
	if (n == 0){
		cout<<"�ҵ�С����";
	}
	else {
		cout << "����";
		ans(n - 1);
		cout << "����";
	}
}

int main() {
	int n;
	cin >> n;
	cout << "�ŵ��ұ�����";
	ans(n);

	
	return 0;
}
