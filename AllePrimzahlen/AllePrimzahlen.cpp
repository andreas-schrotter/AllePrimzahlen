#include <stdio.h>

bool checkForPrime(int number) {
	int amountDivs = 0;

	for (int i = 1; i <= number; i++) {
		if (number % i == 0) {
			amountDivs++;
		}
	}

	if (amountDivs == 2) {
		return true;
	}
	else {
		return false;
	}
}

int main() {
	int number;

	printf("Bitte geben Sie eine Zahl ein: ");
	scanf_s("%d", &number);

	for (int i = 1; i <= number; i++) {
		if (checkForPrime(i)) {
			printf("%d ", i);
		}
	}

	return 0;
}