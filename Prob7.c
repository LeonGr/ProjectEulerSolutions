#include <stdio.h>

int primes = 1;

int isPrime(int number) {
	for (int i = 2; i < number; i++) {
        if (number % i == 0 && i != number){
        	return 0;
		} 
    }

    printf("Prime number %d: %d\n",primes,number);
    primes++;

    return 0;
}

int main() {
	for (int i = 2; i <= 200000; i++) {
		isPrime(i);
		if (primes == 10001 + 1) {
			return 0;
		}
	}

	return 0;
}