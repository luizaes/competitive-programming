#include <iostream>

using namespace std;

int main() {

	int contador = 0, num_casos, qtd_gols, i, blue = 0, red = 0, green = 0;
	char time1, time2;

	cin >> num_casos;
	while(contador < num_casos) {
		cin >> qtd_gols;
		blue = red = green = 0;
		for(i = 0; i < qtd_gols; i++) {
			cin >> time1 >> time2;
			if(time1 == 'R') {
				if(time2 == 'B') {
					red++;
				} else if(time2 == 'G') {
					red += 2;
				}
			} else if(time1 == 'G') {
				if(time2 == 'R') {
					green++;
				} else if(time2 == 'B') {
					green += 2;
				}
			} else if(time1 == 'B') {
				if(time2 == 'G') {
					blue++;
				} else if(time2 == 'R') {
					blue += 2;
				}
			}
		}
		
		if(blue > red && blue > green) {
			cout << "blue" << endl;
		} else if(red > blue && red > green) {
			cout << "red" << endl;
		} else if(green > red && green > blue) {
			cout << "green" << endl;
		} else if(green == red && red == blue) {
			cout << "trempate" << endl;
		} else {
			if(red == blue || blue == green || red == green) {
				cout << "empate" << endl;
			}
		}

		contador++;
	}

	return 0;
}