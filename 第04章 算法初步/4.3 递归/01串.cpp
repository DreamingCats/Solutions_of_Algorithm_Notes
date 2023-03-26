//貌似用二进制加法，每次+1到n也可以 
#include <cstdio>
#include <vector>
#include<iostream>
using namespace std;

vector<vector<int> > result;
vector<int> temp;
int n;

void DFS(int idx) {
    if (idx == n) {
        result.push_back(temp);
        return;
    }
    temp.push_back(0);
    DFS(idx + 1);
    temp.pop_back();
    temp.push_back(1);
    DFS(idx + 1);
    temp.pop_back();
}

int main() {
    cin >> n;
    DFS(0);
    for (int i = 0; i < result.size(); i++) {
        for (int j = 0; j < result[i].size(); j++) {
            cout<<result[i][j];
        }
        cout<<endl;
    }
    return 0;
}
