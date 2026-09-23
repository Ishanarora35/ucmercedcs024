#include <iostream>
#include <vector>
#include <string>

using namespace std;


class elevator {
    private:
    int curf;
    int maxf;
    public:
    elevator() {
        curf = 1;
        maxf = 10;
    }
    

    // ask question about this code, if i can just do this for the quiz
    elevator(int c, int m) {
        curf = c;
        maxf = m;
    }

    
    elevator(int mf) {
        curf = 1;
        maxf = mf;
    }
    int getmax() const {
        return maxf;
    }
    int getcurrent() const {
        return curf;
    }
    void gtfloor(int f) {
        if (1 <= f && f<=maxf) {
            curf = f;
        } else {
            cout << "floor out of range" << endl;
        }
    }
    ~elevator() {
        cout << "elevator at floor <" << curf << "> shutting down" << endl;
    }
};


int main () {



    elevator x();
    elevator c(10);
    elevator b(1,112);
    

}

