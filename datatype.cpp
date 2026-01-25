// Author : velan
// Date : jan-25-26 at 11:22 am in Indian Standard Time
// Description : I cover what is dataTypes in cpp

#include <iostream> // Header for I/O
#include <string>   // Header for String
using namespace std;

int main() // _Start
{
  int interger = 9;                      // byte : 2
  float floating = 5.5;                  // byte : 4
  char character = 'x';                  // byte : 1
  string sentence = "Welcome all";       // byte : based on length of characters
  double floating_with_extraSize = 8.50; // byte : 8
  bool Boolean = true;                   // byte : 1

  char a = 65; // value is 'A' it should assign character based on "ASCII-code";
  double d1 = 13e3; // 'e' to indicate power of 10
  float f1 = 12e5;  // 'e' same as here too
  auto guess = 7;   // 'auto' keyword assign datatype based on given value

  cout << "a = " << a << endl;
  cout << "d1 = " << d1 << endl;
  cout << "f1 = " << f1 << endl;
  cout << "guess : " << typeid(guess).name() << endl;

  return 0; // _Exit
}
