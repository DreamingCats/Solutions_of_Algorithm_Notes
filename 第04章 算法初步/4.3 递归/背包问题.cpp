#include<cmath>
#include<iostream>
using namespace std;
const int N = 13;
int n, weightBag;
int weight[N], value[N];

//�ӵ�i����Ʒ��ʼ��ѡ����С��j�Ĳ���
int select(int i, int j)
{
	int result;
	if (i == n)//�Ѿ�û��ʣ�����Ʒ��
		result = 0;
	else if (j < weight[i])
		result = select(i + 1, j);
	else
	{
		result = max(select(i + 1, j), select(i + 1, j - weight[i]) + value[i]);//һ����Ʒѡ���ǲ�ѡ����һ��
	}
	return result;
}

int main()
{
	//cout << "��������Ʒ�������ͱ���������" << endl;
	cin >> n >> weightBag;
	//cout << "��ֱ�������Ʒ" << endl;
	for (int i = 0; i < n; i++)
		cin >> weight[i];
	for (int j = 0; j < n; j++)
		cin >> value[j];
	cout << select(0, weightBag);
	return 0;
}

