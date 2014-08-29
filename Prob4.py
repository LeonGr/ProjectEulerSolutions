n = 0

def checkPalindrome(number):
	n = number
	largest = 0
	reverse = 0

	while n != 0:
		reverse = reverse * 10
		reverse = reverse + n % 10
		n = n / 10

	if number == reverse:
		
		if number > largest:
			largest = number;

	if largest != 0:
		print largest

	return 0

for x in xrange(1000,100, -1):
	for y in xrange(1000,100, -1):
		checkPalindrome(x * y)