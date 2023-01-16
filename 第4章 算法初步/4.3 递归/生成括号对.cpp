//呃呃，dc过不了编译，用vc吧，抄的题解
#include <cstdio>
#include <iostream>
#include <set>
#include <string>
#include <algorithm>
using namespace std;

const int MAXN = 11;
set<string> hashedResults[MAXN];

set<string> DFS(int n) {
    if (hashedResults[n].size() > 0) {
        return hashedResults[n];
    }
    set<string> results;
    for (int i = 1; i < n; i++) {
        set<string> leftResults = DFS(i);
        set<string> rightResults = DFS(n - i);
        for (auto leftResult : leftResults) {
            for (auto rightResult : rightResults) {
                results.insert(leftResult + rightResult);
            }
        }
    }
    set<string> subResults = DFS(n - 1);
    for (auto subResult : subResults) {
        results.insert("(" + subResult + ")");
    }
    hashedResults[n] = results;
    return results;
}

int main() {
    int n;
    cin >> n;
    hashedResults[0].insert("");
    set<string> results = DFS(n);
    for (auto result : results) {
        cout << result << endl;
    }
    return 0;
}
