#include <bits/stdc++.h>

using namespace std;

int main() {

	int chapters, first, last, marked, contador = 0;
	vector< pair<int, int> > pages;

	cin >> chapters;

	for(int i = 0; i < chapters; i++) {
		cin >> first >> last;
		pages.push_back(make_pair(first, last));
	}

	cin >> marked;

	for(int i = 0; i < pages.size(); i++) {
		if(marked <= pages[i].second) {
			contador++;
		}
	}

	cout << contador << endl;

	return 0;
}