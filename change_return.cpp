/*enter enters a cost and then the amount of money given. The program will figure out the change and the number of quarters, dimes, nickels, pennies needed for the change.
*/
#include <iostream>
using namespace std;
int main() {
  double given = 0.0, cost = 0.0, difference = 0.0, pennies = 0.0;
  cout << "What is the cost? " << endl;
  cin >> cost;
  cout << "What is the given amount? " << endl ;
  cin >> given;
  difference = given - cost;
  int quaters = 0 , nickels = 0, dimes = 0;
  if(difference >= 0.25) {
    	quaters = ((int)(difference/0.25));
	difference = difference - (quaters * 0.25);
  }
 
  if(difference >= 0.10 ) {
	cout << "HERE in dime" << endl;
	dimes = ((int)(difference/0.10));
	difference = difference - (dimes * 0.10);
  }
 
  if(difference >= 0.05) {
	nickels = ((int)(difference/0.05));
	difference = difference - (nickels * 0.05);
  }
  pennies = difference * 100;
  cout << "Quaters: " << quaters << " dimes: " << dimes  << " Nickels: " << nickels << " pennies: " << pennies << endl;

}
