#include <bits/stdc++.h>

using namespace std;

int main() {

	int w1, w2, h1, h2, saida = 0;

	cin >> w1 >> h1 >> w2 >> h2;

	saida = (h1 + h2 + w1) * 2 + 4;

	cout << saida << endl;

	return 0;
}