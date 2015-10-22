/*enter enters a cost and then the amount of money given. The program will figure out the change and the number of quarters, dimes, nickels, pennies needed for the change.
*/
#include <iostream>
using namespace std;
int main() {
  double given = 0.0, cost = 0.0, difference = 0.0;
  cout << "What is the cost?" ;
  cin >> cost;
  cout << "What is the given amount?" ;
  cin >> given;
  difference = cost - given;
  int quaters, nickels, dimes, pennies;
  if(difference >= 0.25) {
    	quaters = ((int)(difference/0.25));
	difference = difference - (quaters * .25);
  } 
  if(difference <= 0.20 && difference >= 0.10 ) {
	dimes = ((int)(difference/0.10));
	difference = difference - (dimes * .10);
  }
  if(difference < 0.10 && difference >= 0.5) {
	nickels = ((int)(difference/0.05));
	difference = difference - (nickels * .10);
  }
  pennies = difference;
  cout << "Quaters: " << quaters << " dimes: " << dimes  << " Nickels: " << nickels << " pennies: " << pennies << "\n";


/*
  int quaters = ((int)(difference/0.25));
  difference = difference - (quaters * .25);
  if(differecne != 0) {
  	int dime = ((int)(difference/0.10));
  	difference = differecne - (dime * .1);
	cout "Dimes: "<< dime << "\n"
	if(difference != 0) {
		int nickel = ((int)(difference/0.10));
		difference = differecne - (nickel * .5);
		cout << "Nickels: " << nickel << "\n";
		if (difference != 0) {
			int pennies = difference;
			cout << "Total pennies: "<< pennies << "\n";
		}
	}
  }
	
*/
 //cout << "Total quaters" << quaters << "\n";
  

}
