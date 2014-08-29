numberToCheck = 600851475143

def IsPrime(number):
	for x in range(2, number):
		if number % x == 0 and x != number:
			return 0

		if numberToCheck % number == 0:
			print number
			return 0

for x in xrange(10000,0, -1):
	IsPrime(x)