#include<cmath>
#include<iostream>
using namespace std;
const int N = 13;
int n, weightBag;
int weight[N], value[N];

//从第i个物品开始挑选总重小于j的部分
int select(int i, int j)
{
	int result;
	if (i == n)//已经没有剩余的物品了
		result = 0;
	else if (j < weight[i])
		result = select(i + 1, j);
	else
	{
		result = max(select(i + 1, j), select(i + 1, j - weight[i]) + value[i]);//一个物品选还是不选都试一下
	}
	return result;
}

int main()
{
	//cout << "请输入物品的数量和背包的重量" << endl;
	cin >> n >> weightBag;
	//cout << "请分别输入物品" << endl;
	for (int i = 0; i < n; i++)
		cin >> weight[i];
	for (int j = 0; j < n; j++)
		cin >> value[j];
	cout << select(0, weightBag);
	return 0;
}

