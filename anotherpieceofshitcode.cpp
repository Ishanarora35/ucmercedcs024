#include <iostream>
using namespace std;

struct person {
  string n;
  int a;
  person (string na, int ag) {
      n = na;
      a = ag;
  }
};

int main () {
    person ishan("ishan",20);
    cout << ishan.n << endl;
}
