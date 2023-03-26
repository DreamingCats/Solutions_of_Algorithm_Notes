#include<iostream>
#include<cstring>
using namespace std;

int compare(const void* b, const void* a) {
    return (*(int*)a - *(int*)b);
}



int main() {
    int n;
    cin >> n;
    int str[1000];
    for (int i = 0;i < n;i++) {
        cin >> str[i];
    }
    int rank = 1;
    qsort(str, n, sizeof(int), compare);
    cout << str[0] << " " << 1 << endl;
    for (int i = 1;i < n;i++) {
        if (str[i] != str[i - 1]) {

            rank = i + 1;
        }
        
            cout << str[i] << " " << rank << endl;

    }
    return 0;
}
