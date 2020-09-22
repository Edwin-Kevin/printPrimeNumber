#include <stdio.h>

int main() {
	bool Is_PrimeNumber;
	for(int i = 1 ; i <= 100; i++) {
		Is_PrimeNumber = false;
		for(int j = 2; j < i; j++) {
			if (i % j == 0) {
				Is_PrimeNumber = true;
				break;
			}
		}
		if (Is_PrimeNumber == false) {
			printf("%d ", i);
		}
	}
	return 0;
}