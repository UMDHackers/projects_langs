#factorial
def factorial(number):
	if number == 0:
		return 0 
	if number == 1:
		return 1
	return number * factorial(number-1) 

#main
number = input("Enter a number: ")

print("number: "+ str(number) + " factorial "+ str(factorial(number)))