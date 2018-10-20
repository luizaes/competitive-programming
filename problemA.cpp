#include <bits/stdc++.h>

using namespace std;

int main() {

    int num_casos, cont = 0, num_amigos, amg, maior = 0;
    vector<int> numbers;

	scanf("%d", &num_casos);

	while(cont < num_casos) {
		scanf("%d", &num_amigos);

    	numbers.push_back(0);
		for(int i = 1; i <= num_amigos*2; i++) {
			scanf("%d", &amg);
			numbers.push_back(amg);
		}

		for(int i = 1; i <= num_amigos; i++) {
      if(i == 1) {
        maior = numbers[i] + numbers[2*num_amigos-i+1];
      } else if(numbers[i] + numbers[2*num_amigos-i+1] > maior) {
        maior = numbers[i] + numbers[2*num_amigos-i+1];
      }
		}

    printf("%d\n", maior);
    numbers.clear();
		cont++;
	}

    return 0;
}
