#include<iostream>
#include<cstring>
using namespace std;

void ans(int n) {
	
	if (n == 0){
		cout<<"讲你妹的故事啊！快点去睡觉！！！"<<endl;
	}
	else {
		cout << "从前有座山，山上有座庙\n庙里有一个老和尚和一个小和尚\n睡前老和尚给小和尚讲故事：\n";
		ans(n - 1);
		cout << "然后老和尚和小和尚就睡觉啦"<<endl;
	}
}

int main() {
	int n;
	cin >> n;
	
	ans(n);

	
	return 0;
}
