/* Paradigmas, 1029 - Fibonacci, Quantas Chamadas? */

#include <iostream>

using namespace std;

int num_chamadas;
int fibonacci(int num);

int main() {

	int num_casos, cont = 0, fib, i;

	cin >> num_casos;
	while(cont < num_casos) {
		num_chamadas = 0;
		cin >> fib;
		cout << "fib(" << fib << ") = " << num_chamadas-1 << " calls = " << fibonacci(fib) << endl;
		cont++;
	}

	return 0;
}

int fibonacci(int num) {

	num_chamadas++;
	if(num == 0) {
		return 0;
	} else if(num == 1) {
		return 1;
	}

	return fibonacci(num-1) + fibonacci(num-2);
}