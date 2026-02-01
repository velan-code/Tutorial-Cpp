// Author : velan
// Date : feb-1-26 at 7.21 at Indian Standard Time
// Description : Min-Max finder program through cpp

/* Here it was Another from same gemini AI , that ask me to done it
 *
 * The Challenge: The "Min-Max" Finder
 * Write a program that asks the user to enter 5 integers. Store them in an
 * array, then find and print the largest and smallest numbers in that list.
 *
 *     above is the quwestion here i doen in my style;
 */

#include <iostream> // Header for console I/O
using namespace std;

int main() // _start
{
  int min, max;
  int arr[5];

  cout << "Enter five value for array : {";
  for (int i = 0; i < 5; i++) {
    cin >> arr[i]; // get input for array

    //  Prompting better way (representation)
    if (i == 4) {
      cout << " ]";
    } else {
      cout << " , ";
    }
  }

  min = arr[0]; // Intiziating value
  max = arr[0]; // Intiziating valur for sort

  for (int i = 0; i < 5; i++) {
    if (arr[i] > max) {
      max = arr[i];
    }
    if (arr[i] < min) {
      min = arr[i];
    }
  }

  cout << "min : " << min << endl;
  cout << "max : " << max << endl;
  return 0; // _end
}
