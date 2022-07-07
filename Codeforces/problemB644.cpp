#include <bits/stdc++.h>

using namespace std;

int main() {

	int t, cont = 0, n, minValue;
	vector<int> athletes;

	cin >> t;

	while(cont < t) {

		cin >> n;
		athletes.assign(n, 0);

		for(int i = 0; i < n; i++) {
			cin >> athletes[i];
		}

		sort(athletes.begin(), athletes.end());

		minValue = 1001;
		for(int i = 0; i < n-1; i++) {
			if(athletes[i+1]-athletes[i] < minValue) {
				minValue = athletes[i+1]-athletes[i];
			}
		}

		cout << minValue << endl;

		athletes.clear();
		cont++;
	}

	return 0;
}