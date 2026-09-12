#include <iostream>
using namespace std;


void double(int &x) {
x = x*2;
}

int main(){
  int x = 5;
  double(x);
cout << x << endl;
}
