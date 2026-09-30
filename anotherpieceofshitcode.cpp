#include <iostream>
using namespace std;

struct person {
  string n;
  int a;
  person (string n, int a) {
      this->n = n;
      this->a = a;
  }
};

int main () {
    person ishan("ishan",20);
    cout << ishan.n << endl;
}
