#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

typedef vector<int> BigInt;

BigInt toBigInt(string nums) {
    BigInt result;
    for (int i = (int)nums.length() - 1; i >= 0; i--) {
        result.push_back(nums[i] - '0');
    }
    return result;
}

BigInt mul(BigInt a, int b) {
    BigInt c;
    int carry = 0;
    for (int i = 0; i < a.size(); i++) {
        int temp = a[i] * b + carry;
        c.push_back(temp % 10);
        carry = temp / 10;
    }
    while (carry) {
        c.push_back(carry % 10);
        carry /= 10;
    }
    while (c.size() > 1 && c.back() == 0) {
        c.pop_back();
    }
    return c;
}

void printans(BigInt a) {
    for (int i = (int)a.size() - 1; i >= 0; i--) {
        cout << a[i];
    }
}

int main() {
    string nums;
    int b;
    cin >> nums >> b;
    BigInt a = toBigInt(nums);
    printans(mul(a, b));
    return 0;
}
