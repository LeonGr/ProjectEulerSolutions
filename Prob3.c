# include <stdio.h>

long long numberToCheck = 600851475143;

int IsPrime(int number) {
    int i;
	
    for (i = 2; i < number; i++) {
        if (number % i == 0 && i != number){
			return 0;
		} 
    }
	
	if(numberToCheck % number == 0){
		printf("%d is a prime factor! \n", number);
		return 1;
	}
    return 1;
}

int main() {
	for(int i = 10000; i > 0; i--){
		IsPrime(i);
	}
	return 0;
}