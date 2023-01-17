#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;

const int MAXN = 10001;
string nums[MAXN];

bool cmp(string a, string b) { //两个串连起来比大小 
    return a + b < b + a;
}

int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }
    sort(nums, nums + n, cmp);
    string result = "";
    for (int i = 0; i < n; i++) {
        result += nums[i];
    }
    while (result.length() > 1 && result[0] == '0') { //删掉首位的0 
        result.erase(result.begin());
    }
    cout << result ;
    return 0;
}
