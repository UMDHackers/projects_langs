#include <stdio.h>
#include <math.h> 
/*
  Prime Factorization - 
  Have the user enter a number and 
  find all Prime Factors (if there are any) and display them.
*/
bool prime_check (int number);

int main() {
 int input = 0, i = 0;
 print("What is your number?\n");
 scanf("%d", &input);
 for(i = 0; i < input; i++) {
   if(input % i == 0) {
     if(prime_check(i)) {
	printf("prime factor %d\n", i);
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
 for(i = 1; i < sqrt( (double) number); i++) {
  if(number % i == 0) {
    return false;
  }
 }
 return true;

}
