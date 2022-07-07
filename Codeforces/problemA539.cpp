#include <bits/stdc++.h>

using namespace std;

int main() {

	int i = 0, numberCities, tank, money = 0, gas = 0;

	cin >> numberCities >> tank;

	if(numberCities-1 <= tank) {
		money += numberCities-1;
		gas += numberCities-1;
	} else {
		money += tank;
		gas += tank;
	}


	if(gas >= numberCities-1) {
		cout << money << endl;
	} else {
		i = 2;
		while(true) {
			tank--;
			money += i;
			tank++;
			numberCities--;
			if(tank >= numberCities-1) {
				break;
			}
			i++;
		}
		cout << money << endl;
	}

	return 0;
}