# include <stdio.h>

int checkEvenDiv(long number){
	for(int i = 1; i <= 20; i++){
		if(number % i != 0){
			return 1;
		}
	}
	
	printf("The number  %ld is divisible!", number);
	return 0;
}

int main() {
	for(long i = 1; i < 300000000; i++){
		checkEvenDiv(i);		
	}
	return 0;
}