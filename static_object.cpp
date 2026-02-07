// Author : velan
// Date : Feb-7-26 at Indian Standard Time
// Description : class with static member

#include <iostream> // Header for Console I/O
#include <numeric>
using namespace std;

class product {

  static int count;

  float price;
  int quanity;

public:
  product(float, int);
  void show_details();
};

product::product(float Price, int Quanity) {
  price = Price;
  quanity = Quanity;
  count++;
}

void product::show_details() {
  cout << "\nNumber count : " << count << endl;
  cout << "Price : " << price << endl;
  cout << "Quanity : " << quanity << endl;
}

int product::count;

int main() // _start
{
  product banana(10.4, 5);
  banana.show_details();

  product apple(99999.10, 1);
  apple.show_details();

  product orange(8.5, 2);
  orange.show_details();

  return 0; // _end
}
