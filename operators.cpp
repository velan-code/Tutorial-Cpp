// Author : velan
// Date : Jan-25-26 at 12.54pm Indian Standard Times
// Description : Learning About Operators in cpp

// Algorithmes || Chapter : Operators
/*
 * 1. Arithmatic Operators
 * 2. Relational Operators
 * 3. Assignment Operators
 * 4. Logical Operators
 * 5. Bitwise Operators
 */

#include <iostream> // Header for Console I/O
using namespace std;

int main() // _Start
{
  // Take two value to performe Operations
  int a = 5, b = 5;

  // 1. Arithmatic Operators
  /*
   * i) Addition +
   * ii) Subraction -
   * iii) Multiplycation *
   * iv) Division /
   * v) Modulus %
   */

  cout << "Additon : " << a + b << endl;
  cout << "Subraction : " << a - b << endl;
  cout << "Multiplycation : " << a * b << endl;
  cout << "Division : " << a / b << endl;
  cout << "Modulus : " << a % b << endl;

  // Increament and Decreament
  int peopleInroom = 0;

  // three people entered room
  peopleInroom++;
  peopleInroom++;
  peopleInroom++;

  cout << "number of people Entered room : " << peopleInroom << endl;

  // two people left the room
  peopleInroom--;
  peopleInroom--;

  cout << "number of people left room : " << peopleInroom << endl;

  // 2. Relational Operator
  /*
   * 1. Equalto ==
   * 2. Greater than >
   * 3. Lesser than <
   * 4. Greater than or Equal to >=
   * 5. Lesser than or Equal to <=
   * 6. Not Equal to !=
   */

  if (a == b) {
    cout << " a and b is same value" << endl;
  }
  if (a > b) {
    cout << "a is biggest number" << endl;
  }
  if (b < a) {
    cout << "b is biggest number" << endl;
  }
  if (2 >= 2) {
    cout << " 2 is ( >= ) to 2" << endl;
  }
  if (2 <= 3) {
    cout << " 3 is ( >= ) to 2" << endl;
  }
  if (a != b) {
    cout << " a and b has no same value " << endl;
  }

  // 3. Assignment Operators
  /*
   * 1. Assignment =
   * 2. Compound Assignment (+,-,*,/)=
   */

  // Assignment
  int x = 5; // = is used as Assigment

  // Compound Assignment
  x += 5; // add Assign
  x -= 4; // sub Assign
  x *= 2; // multi Assign
  x /= 1; // divi Assign

  // 4. Logical Operator
  /*
   * 1. AND &&
   * 2. OR ||
   * 3. NOT !
   */

  if (a > b && a > x) {
    cout << "A is greater than b,x " << endl;
  }
  if (a > b || x > b) {
    cout << "b is the  smallest number " << endl;
  }
  if (!false) {
    cout << "not is change the true as false, and false as true" << endl;
  }

  // 5. Bitwise Operator
  /*
   * 1. AND &
   * 2. OR |
   * 3. NOT ~
   * 4. XOR ^
   * 5. LEFT SHIFT <<
   * 6. RIGHT SHIFT >>
   */

  // BITWISE operations
  int z = 2; // Binary 0010
  if (z & 0) {
    cout << "it is Even number" << endl; // Cause even number end as 0 in Binary
  }

  return 0; // _End
}
