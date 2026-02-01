// Author : velan
// Date : Feb-1-26 at 6.59 in indian standard time
// Description : program to determine user is old enough to vote or drive

/* next challenge that gemini gives me */

/* Algorithm
 * 1.get age from user
 * 2.check whether possible using with age
 * 3.show results
 */

#include <iostream> // Header for Console I/O
using namespace std;

int main() // _start
{
  int age; // Allocating memory for to store age

  cout << "Enter your age : "; // get age thorough prompt
  cin >> age;                  // store in age memory

  // Desion making whether using age
  if (age >= 18) {
    cout << "You old enough to vote !" << endl;
  } else if (age >= 16) {
    cout << "You old enough to drive !!" << endl;
  } else {
    cout << "Too young you are boy" << endl;
  }
  return 0; // _end
}
