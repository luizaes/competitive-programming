#include <bits/stdc++.h>

using namespace std;

int main() {

	int manholes, index, moves = 0;

	cin >> manholes >> index;

	moves = (manholes * 2) + (manholes-1) +1;

	if(index != manholes && index != 1) {
		if(abs(index-manholes) <= abs(index-1)) {
			moves += abs(index-manholes);
		} else {
			moves += index - 1;
		}
	}

	cout << moves << endl;

	return 0;
}