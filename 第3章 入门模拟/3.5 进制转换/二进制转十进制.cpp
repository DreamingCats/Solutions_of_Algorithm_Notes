#include<iostream>
using namespace std;
int main() {
	int bin;
	cin >> bin;
	int dec=0;
	int product=1;
	while (bin != 0) {
		dec = dec + (bin % 10) * product;
		bin = bin / 10;
		product = product * 2;
	}
	cout << dec;
	return 0;
}
