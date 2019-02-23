#include <bits/stdc++.h>

using namespace std;

unsigned int count(int n) {

	unsigned int c = 0;

	while(n) {
		n &= (n-1);
		c++;
	}

	return c;
}

int main() {

	int number;

	cin >> number;

	cout << count(number) << endl;

	return 0;
}