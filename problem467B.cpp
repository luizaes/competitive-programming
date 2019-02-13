#include <bits/stdc++.h>

using namespace std;

unsigned int countSetBits(int n) {
	unsigned int count = 0;

	while(n) {
		n &= (n-1);
		count++;
	}

	return count;
}

int main() {

	int n, k, m, value, aux, count = 0;
	vector<int> numbers;

	cin >> n >> m >> k;

	for(int i = 0; i < m; i++) {
		cin >> aux;
		numbers.push_back(aux);
	}

	cin >> value;

	for(int i = 0; i < m; i++) {
		if(countSetBits(value^numbers[i]) <= k) {
			count++;
		}
	}

	cout << count << endl;

	return 0;
}