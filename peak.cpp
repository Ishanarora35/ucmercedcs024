class book {
    private:
    string title;
    int page;
    public:
    book() {
        title = "Untitled";
        page = 0;
    }
    book(string n, int p) {
        title = n;
        page = p;
    }
string gettitle() const {
    return title;
}
int getpage() const {
    return page;
}
void addpage(int x) {
    if (x > 0) {
        page += x;
    }
}
};
