# include <stdio.h>

long long int a = 0;
long long int b = 1;
long long int c;
long long int sum;
long long int i = 0;

int main() {
	while(c < 4000000){
		c = a + b;
		a = b;
		b = c;
		
		if (c % 2 == 0){
			sum += c;
		}
		i++;
	}
	printf("%lld",sum);
	return 0;
}