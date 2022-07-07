#include <bits/stdc++.h>

using namespace std;

int main() {

	int t, cont = 0, n, even, odd;
	vector<int> numbers;
	bool pairs = false;

	cin >> t;

	while(cont < t) {

		cin >> n;
		numbers.assign(n, 0);

		even = odd = 0;

		for(int i = 0; i < n; i++) {
			cin >> numbers[i];
			if(numbers[i] % 2 == 0) {
				even++;
			} else {
				odd++;
			}
		}

		if(even % 2 == 0) {
			cout << "YES" << endl;
		} else {
			sort(numbers.begin(), numbers.end());
			pairs = false;
			for(int i = 0; i < n-1; i++) {
				if(numbers[i+1]-numbers[i] == 1) {
					pairs = true;
					break;
				}
			}
			if(pairs) {
				cout << "YES" << endl;
			} else {
				cout << "NO" << endl;
			}
		}

		numbers.clear();
		cont++;
	}

	return 0;
}