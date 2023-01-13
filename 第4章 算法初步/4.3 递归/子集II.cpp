#include <cstdio>
#include <vector>
#include <algorithm>
#include<iostream>
using namespace std;

vector<vector<int> > result;
vector<int> temp;
int n;
int a[13];

void DFS(int idx) {
    if (idx == n + 1) {
        result.push_back(temp);
        return;
    }
    temp.push_back(a[idx]);
    DFS(idx + 1);
    temp.pop_back();
    DFS(idx + 1);
}

bool cmp(vector<int>& a, vector<int>& b) {
    if (a.size() != b.size()) {
        return a.size() < b.size();
    }
    else {
        return a < b;
    }
}

int main() {
    cin >> n;
    //int a[12];
    for (int i = 1;i <= n;i++) { //a[0]²»´æÊý¾Ý
        cin >> a[i];
    }
    DFS(1);
    sort(result.begin(), result.end(), cmp);
    for (int i = 0; i < result.size(); i++) {
        for (int j = 0; j < result[i].size(); j++) {
            printf("%d", result[i][j]);
            if (j + 1 < result[i].size()) {
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}
