__author__ = 'Parth'
import math

print("What is the principle/initial loan?")
loan = input()

print("What is the Interest Rate?")
intrest_rate = input()
monthly_interest = intrest_rate/1200

print("What is the fixed rate time?")
year = input()
month = year * 12


sec1 = loan * (monthly_interest * (math.pow (1 + monthly_interest, month)))
sec2 = (math.pow(1 + monthly_interest, month-1))
mortage = sec1/sec2
print "Monthly fee: ", mortage