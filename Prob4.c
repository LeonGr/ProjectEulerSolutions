# include <stdio.h>

int largest = 0;

int checkPalindrome(int number){
	int n = number;
	int reverse = 0;
 
	while (n != 0) {
		reverse = reverse * 10;
		reverse = reverse + n % 10;
		n = n / 10;
	}
 
//	printf("Reverse of entered number is = %d\n", reverse);
   
	if (number == reverse){
//		printf("%d is a palindrome number!\n", number);
		
		if(number > largest){
			largest = number;
		}
	}
	
	printf("%d\n", largest);
	
	return 0;
}

int main() {
	
	for(int i = 1000; i > 100; i--){
		for(int j = 1000; j > 100; j--){
			checkPalindrome(i * j);
		}
	}
   return 0;
}