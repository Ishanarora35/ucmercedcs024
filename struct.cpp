#include <iostream>
using namespace std;


struct book {
string title;
string author;
int pagecount;
book(string t, string a, int p) {
    title = t;
    author = a;
    pagecount =p;
    }
};
int main () {
    book part("harry", "ishan", 500);
    cout << part.title << endl;
    cout << part.author << endl;
    cout << part.pagecount << endl;
    
    //return 0;




}
