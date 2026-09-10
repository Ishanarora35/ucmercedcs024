#include <iostream>
using namespace std;

int count(int x) {
    int final = 0;
    for (int i = 0; i < x; i++) {
        final = final + 1;
    }
    return final;
}

char grade(int score) {
    char x = 'A';
    if (score >= 90) {
        return x;
    } else if (score < 90 && score >= 80) {
        x = 'B';
        return x;
    } else if (score < 80 && score >= 70) {
        x = 'C';
        return x;
    } 
     else if (score < 70 && score >= 60) {
        x = 'D';
        return x;
    } else {
        x = 'F';
        return x;
    }
}

int main () {
cout << "hello" << endl;
}
