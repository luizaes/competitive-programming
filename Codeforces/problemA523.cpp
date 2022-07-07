#include <bits/stdc++.h>

using namespace std;

int main() {

	int n, s, answer;

	cin >> n >> s;

	answer = s / n;

	if(s % n) {
		answer++;
	}

	cout << answer << endl;

	return 0;
}