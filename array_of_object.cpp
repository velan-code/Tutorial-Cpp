// Author : velan
// Date : feb-8-26 at Indian Standard Time
// Description : Explain About Array of object

#include <iostream>
using namespace std;

class player {

  string name;
  int age;

public:
  void get_data();
  void show_data();
};

void player::get_data() {
  cout << "\n Enter player " << " name : ";
  cin >> name;
  cout << "\n Enter player " << " age : ";
  cin >> age;
}

void player::show_data() {
  cout << "\n Player name : " << name;
  cout << "\n Player age : " << age << endl;
}

int main() // _start
{
  int num = 2; // number of player
  player team[num];

  for (int i = 0; i < num; i++) {
    team[i].get_data();
  }

  for (int i = 0; i < num; i++) {
    team[i].show_data();
  }

  return 0; // _end
}
