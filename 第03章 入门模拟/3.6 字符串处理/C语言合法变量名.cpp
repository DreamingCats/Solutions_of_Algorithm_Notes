/*
һ���Ϸ���C���Ա�������Ҫ���㣺

�����ַ��������ҽ�����ĸ��A-Z,a-z�������֣�0-9�����»��ߣ�_����ɣ�
���ַ����������֣���������ĸ���»��ߣ�
������C���Թؼ��֣���if��while�ȡ�
����һ����C���Թؼ��ֵ��ַ������ж����Ƿ������Ϊ�Ϸ���C���Ա�������
*/
#include<iostream>
#include<cstring>
#define _CRT_SECURE_NO_WARNINGS
using namespace std;
int main() {
    char str[20];
    cin >> str;
    int i = 0;
    int len = strlen(str);
    int count = 1;
    int j;
    while (len--) {
        if (str[0] == '0' || str[0] == '1' || str[0] == '2' || str[0] == '3' || str[0] == '4' || str[0] == '5' || str[0] == '6' || str[0] == '7' || str[0] == '8' || str[0] == '9') {
            //���ַ������֣��϶����ǹؼ��� 
			cout << "NO";
            break;
        }
        for (i = 1;i < len;i++) {
            if (str[i] = '_' || (str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a' && str[i] <= 'z')) {

                count++;
            }
            else {
                cout << "NO";
            }
        }
        if (count == len) {
            cout << "YES";
        }
    }

    return 0;
}
