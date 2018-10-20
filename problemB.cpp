#include <bits/stdc++.h>

using namespace std;

vector<int> binary(int number) {
  vector<int> v;
  for (int i = 20; i >= 0; i--) {
     v.push_back(((number >> i) & 1));
  }
  return v;
}

int main() {

    int num_casos, cont = 0, num, flips = 0, pos = 0;
    vector<int> numbers;

	scanf("%d", &num_casos);

	while(cont < num_casos) {
    scanf("%d", &num);
    flips = 0;
    numbers = binary(num);

    for(int i = numbers.size() -1; i >= 0; i--) {
      if(numbers[i] == 1) {
        numbers[i] = 0;
        pos = i;
        flips++;
        break;
      }
    }

    for(int i = numbers.size() -1; i > pos; i--) {
      if(numbers[i] == 0) {
        numbers[i] = 1;
        flips++;
      }
    }

    printf("%d\n", flips);
    numbers.clear();
		cont++;
	}

    return 0;
}
