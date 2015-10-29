import math
#19
def is_happy(number):
	list = []
	temp = sum_digits(number)
	while temp != 1:
		temp = sum_digits(temp)
		if temp in list:
			return False
		list.append(temp)
	return (temp == 1)
	
def sum_digits(number):
	temp = 0
	while number > 0:
		temp = temp + pow(number % 10, 2)
		number = number//10
	return temp
	
#main
for x in range(1, 100):
	if is_happy(x):
		print("HAPPY!! " + str(x))