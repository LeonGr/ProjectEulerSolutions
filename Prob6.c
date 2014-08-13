# include <stdio.h>
# include <math.h>

int main() {
	int totalSum = 0;
	int totalSquare = 0;
	
	for (int i = 1; i <= 100; i++) {
		totalSum += pow(i, 2);
	}

	for (int i = 1; i <= 100; i++) {
		totalSquare += i;
	}

	printf("%d\n", totalSum);

	printf("%f\n", pow(totalSquare, 2));

	printf("%f\n", pow(totalSquare, 2) - totalSum);

	return 0;
}