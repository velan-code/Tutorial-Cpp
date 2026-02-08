// Author : velan
// Date : Feb-8-26 at 8.18 am
// Description : Explain about friend in cpp

/* friend function is may be a outside function of a class where it can access a
 * class inner private and protected Arributes by declaring keyword "friend" */

#include <iostream> // Header file for Console I/O
using namespace std;

class obj {
  int x, y;

public:
  obj(int X, int Y) {
    x = X;
    y = Y;
  }
  friend void display(obj &entity);
};

void display(obj &entity) {
  cout << entity.x << endl;
  cout << entity.y << endl;
}

int main() // _start
{
  obj A(90, 80);
  display(A);
  return 0;
} // _end
