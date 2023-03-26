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

BigInt div(BigInt a, int b, int &r) {  
	//&r引用，在函数中可以视作直接对原变量进行修改
    BigInt c;
    for (int i = (int)a.size() - 1; i >= 0; i--) {
        r = r * 10 + a[i];
        c.push_back(r / b);
        r = r % b;
    }
    reverse(c.begin(), c.end());
    while (c.size() > 1 && c.back() == 0) {
        c.pop_back();
    }
    return c;
}

void print(BigInt a) {
    for (int i = (int)a.size() - 1; i >= 0; i--) {
        cout << a[i];
    }
}

int main() {
    string nums;
    int b, r = 0;
    cin >> nums >> b;
    if (b == 0) {
        cout << "undefined";
    }
    else{
    	BigInt a = toBigInt(nums);
    	BigInt ans = div(a, b, r);
    	print(ans); //商 
    	cout << " " << r;  //余数 
	}
    
    return 0;
}
