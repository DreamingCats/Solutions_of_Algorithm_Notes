//不懂，抄题解了 
#include <iostream>
#include <cstring>
#include <utility>
using namespace std;

int toNum(string inputstr) {
    int result = 0;
    int len=inputstr.length();
    
    for (int i = 0; i < len; i++) {
        result = result * 10 + (inputstr[i] - '0');
    }
    return result;
}

pair<int, int> DFS(string inputstr) {
    int sum = toNum(inputstr);
	int cnt = 1;
	int len = inputstr.length();
	
    for (int i = 1; i < len; i++) {
        string leftstr = inputstr.substr(0, i);
        string rightstr = inputstr.substr(i, (int)len - i);
        
        pair<int, int> rightResult = DFS(rightstr);
        
        sum += rightResult.first + rightResult.second * toNum(leftstr);
        cnt += rightResult.second;
    }
    return make_pair(sum, cnt);
}

int main() {
    string inputstr;
    cin >> inputstr;
    cout << DFS(inputstr).first;
    return 0;
}
