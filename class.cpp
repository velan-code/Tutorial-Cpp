// Auhtor : velan
// Date : Feb-1-26 at 12.10 pm INdidan Standard time
// Description : Learning cpp class and object

#include <iostream> // Header for Console I/O
using namespace std;

class item {
  int codeNo, quanity;
  float price;

public:
  // Constractor Function
  item(int CodeNo, float Price, int Quanity) {
    codeNo = CodeNo;
    quanity = Quanity;
    price = Price;
  }

  // SHowDetail FUnction
  void showDetail() {
    cout << "Price : " << price << endl;
    cout << "CodeNO : " << codeNo << endl;
    cout << "Qunaity : " << quanity << endl;
  }
};

int main() // _start
{
  item banana(001, 20.5,
              5); // Constractor automatically excute when instance is created
  banana.showDetail(); // calling the showDetail Method
  return 0;            // _end
}
