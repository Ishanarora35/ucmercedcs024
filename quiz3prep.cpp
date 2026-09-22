#include <iostream>
#include <string>
using namespace std;

class battery {
    private:
    int charge;
    string label;
    public:
    battery(string l){
        charge = 100;
        label = l;
    }
    battery(string l, int c) {
        charge = c;
        label = l;
    }
    int getch() const {
        return charge;
    }
    string getla() const {
        return label;
    }
    void setch(int c) {
        charge = c;
    }
    void setla(string l) {
        label = l;
    }
    void drain(int a) {
        if (0 < a && a <= charge){
            charge -= a;
        } else {
            cout << "bad drain" << endl;
        }
    }
    ~battery () {
        cout << "<" << label << "> removed" << endl;
    }
};

int main(){


battery ishan("ishan", 32);
ishan.drain(1);
cout << ishan.getch();



}
