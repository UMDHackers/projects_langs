__author__ = 'Parth'
def fibonacci_n(n, n1, max):
    if n > max:
        print "Failed"
        return
    elif n == max:
        print "max: " + str(max)
        return
    temp = n1
    n1 = n
    n = temp + n
    print(str(n1))
    return fibonacci_n(n, n1, max)

def fibonacci_count(n, n1, tmp):
    if tmp == 0:
        print "Last number " + str(n1)
        return
    else:
        temp = n1
        n1 = n
        n = temp + n

    print(str(n1))
    return fibonacci_count(n, n1, tmp - 1)


print("Would like to go to a number or to the Nth number, 1 or 2")
option = input()

max = 0
count = 0
if option == 1:
    print("pick a number to find in the Fibonacci")
    max = input()
    print("1")
    fibonacci_n(1, 1, max)
else:
    print("pick a number to count up to")
    count = input()
    print("1")
    fibonacci_count(1,1,count)