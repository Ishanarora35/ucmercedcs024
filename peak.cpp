#include <iostream>
#include <string>
using namespace std;

class book {
    private:
    string title;
    int page;
    public:
    book() {
        title = "Untitled";
        page = 0;
    }
    book(string title, int page) {
            this->title = title;
            this->page = page;
    }
string get() const {
    return title;
}
int getpage() const {
    return page;
}


};

int main () {
    book jess("fuck", 67);
   cout << jess.getpage() << endl;
   cout << jess.get() << endl;
    
}
