#include <stdio.h>
#include <math.h> 
#include <iostream>
using namespace std;

/*
  Prime Factorization - 
  Have the user enter a number and 
  find all Prime Factors (if there are any) and display them.
*/
bool prime_check (int number);

int main() {
 int input = 0, i = 0;
 cout << "What is your number?" << endl;
 cin >> input;
 
 for(i = 1; i <= input; i++) {
   if(input % i == 0) {
     if(prime_check(i)) {
	cout << "prime factor " << i << endl;
     }
   }
 }

 return 0;
}

bool prime_check(int number) {
 int i = 0; 
 if(number % 2 == 0) {
  return false;
 }
 
 for(i = 2; i <= sqrt((double) number); i++) {
  if(number % i == 0) {
    return false;
  }
 }
 return true;

}
