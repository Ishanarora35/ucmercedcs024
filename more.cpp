#include <iostream>
#include <string>
#include <vector>

using namespace std;

class garage {
  private:
  int cars;
  int capacity;
  public:
  garage(){
      cars = 0;
      capacity = 5;
  }
  garage(int c) {
      cars = 0;
      capacity - c;
  }
  int getcars() const {
      return cars;
  }
  void parkcar() {
      if (cars < capacity) {
          cars = cars + 1;
      } else {
          cout << "full" << endl;
      }
  }
~garage() {
    cout << "garage closed with <" << cars << "> cars" << endl;
}
};
