#include <bits/stdc++.h>

using namespace std;

int main() {

	int length, cont = 1;
	string str, result = "";

	cin >> length >> str;

	for(int i = 0; i < length; i+=cont) {
		result += str[i];
		cont++;
	}

	cout << result << endl;

	return 0;
}