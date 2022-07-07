#include <bits/stdc++.h>

using namespace std;

int main() {

  int num_casos, cont = 0, x, n, resto;

	scanf("%d", &num_casos);

	while(cont < num_casos) {
		scanf("%d %d", &x, &n);
    int vetor[n];

    if(x < n) {
      printf("-1\n");
    } else {
      resto = x%n;
      for(int i = n-1; i >= 0; i--) {
        if(resto > 0) {
          vetor[i] = x/n + 1;
          resto--;
        } else {
          vetor[i] = x/n;
        }
      }
      for(int i = 0; i < n; i++) {
          if(i == n-1) {
              printf("%d\n", vetor[i]);
          } else {
              printf("%d ", vetor[i]);
          }
      }
    }
		cont++;
	}

    return 0;
}
