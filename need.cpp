
#include <iostream>
#include <string>
using namespace std;
int main() {
    
    string n;
    cin >> n;
    string y;
    cin.ignore();
  getline(cin, y);
    cout << n << endl;
    cout << "now get line" << endl;
  cout << y << endl;
}
