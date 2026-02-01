// Author : velan
// Date : Feb-1-26 at 7.10 in Indian Standard time
// Description : just multipliaction table

/* it just another next challenge gemini offer me , i think it though i was to
 * beginner LOL! */

// Algorithm
/* 1. get which num going to be fall on operation
 *  2. perform table through using iteration in prompt manner
 *  3. show result each in iteration
 */

#include <iostream> // Header for COnsole I\O
using namespace std;

int main() // _start
{
  int num;

  cout << "Enter a number for table : ";
  cin >> num;

  for (int i = 1; i <= 10; i++) {
    cout << num << " * " << i << " = " << num * i << endl;
  }

  return 0; // _end
}
