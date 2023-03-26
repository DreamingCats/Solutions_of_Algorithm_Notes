#include<iostream>
#include<cstring>
using namespace std;

int compare(const void* a, const void* b) {
    return (*(int*)a - *(int*)b);
}



int main() {
    int n;
    cin >> n;
    int str[50];
    for (int i = 0;i < n;i++) {
        cin >> str[i];
    }
    qsort(str, n, sizeof(int), compare);
    for (int i = 0;i < n;i++) {
        cout << str[i];
        if (i < n - 1) {
            cout << " ";
        }
    }
    return 0;
}
