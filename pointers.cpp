#include <iostream>
using namespace std;

void maketen(int *p) {
    *p+=10;
    cout << *p;
}

int main () {
    int x = 5;
    int *p = &x;
    *p += 5;
    cout << x << endl;
    cout << *p << endl;

maketen(&x);
}
