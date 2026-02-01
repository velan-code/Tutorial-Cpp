// Author : velan
// Date : Feb-1-26 at Indian Standard time
// Description : Celsius to Fahrenteit

/* it was gemini challenge that give me problem iam going to done it now */

// Algorithm
/* 1. get valeu from user
 *  2. convert to Fahrenteit
 *  3. show the result
 */

#include <iostream> // Header for Console I/O

int main() // _start
{
  double Fahrenteit;
  double Celsuis;

  std::cout << "Enter temperature in celsius  : ";
  std::cin >> Celsuis;

  Fahrenteit = (Celsuis * (9.0 / 5.0)) + 32.0;

  std::cout << "Fahrenteit is : " << Fahrenteit << std::endl;

  return 0; // _end
}
