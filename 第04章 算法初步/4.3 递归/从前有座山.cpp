#include<iostream>
#include<cstring>
using namespace std;

void ans(int n) {
	
	if (n == 0){
		cout<<"�����õĹ��°������ȥ˯��������"<<endl;
	}
	else {
		cout << "��ǰ����ɽ��ɽ��������\n������һ���Ϻ��к�һ��С����\n˯ǰ�Ϻ��и�С���н����£�\n";
		ans(n - 1);
		cout << "Ȼ���Ϻ��к�С���о�˯����"<<endl;
	}
}

int main() {
	int n;
	cin >> n;
	
	ans(n);

	
	return 0;
}
