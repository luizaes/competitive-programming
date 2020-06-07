#include <bits/stdc++.h>

using namespace std;

int main() {

	int t, cont = 0, a, b, res;

	cin >> t;

	while(cont < t) {

		cin >> a >> b;

		res = max(min(a, b)*2, max(a, b));

		cout << res*res << endl;

		cont++;
	}

	return 0;
}