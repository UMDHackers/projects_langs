__author__ = 'Parth'
import math
def binaryToTen(binary):
    total=0
    counter=0
    binaryHolder=binary
    while binaryHolder>0:
        total += (binaryHolder % 10)*((int)(math.pow(2, counter)))
        binaryHolder /= 10
        counter += 1
    return total

def tenToBinary(decimal):
    current=decimal
    retu=""
    print "current "+ str(current)
    print "current mod "+ str(current%2)

    while current>0:
        retu = str(current%2) + retu
        current=current/2
        print "retu "+ retu
        print "current "+ str(current)

    return retu

print("Enter a postive number: ")
contin = input()
while contin != 0:
    print("Enter base? 10 or 2")
    base = input()
    if base == 2:
        print "Binary "+ str(contin) +" to decimal " + str(binaryToTen(contin))
    else:
        print "Decimal "+ str(contin) +" to binary " + tenToBinary(contin)

    print("Enter another postive number or 0 to quit: ")
    contin = input()



