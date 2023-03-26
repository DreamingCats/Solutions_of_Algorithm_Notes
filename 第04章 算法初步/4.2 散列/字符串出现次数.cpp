#include<iostream>
#include<cstring>
using namespace std;

#define maxsize 1000;
char s[1000][1000];
char temp[1000];
int hashtable[26 * 26 * 26 + 10];

int hashfunc(char s[], int len) {
    int id = 0;
    for (int i = 0;i < len;i++) {
        id = id * 26 + (s[i] - 'A');
    }
    return id;
}

int main() {
    int n;
    cin >> n;
    for (int i = 0;i < n;i++) {
        cin >> s[i];
        int id = hashfunc(s[i], 3);
        hashtable[id]++;
    }
    int m;
    cin >> m;
    for (int j = 0;j < m;j++) {
        cin >> temp;
        int id = hashfunc(temp, 3);
        cout << hashtable[id] ;
        if (j < m - 1) {
            cout << " ";
        }
    }
    return 0;
}
