#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Student {
private:
    string name;
    int age;
    double gpa;

public:
    Student(string n, int a, double g) {
        name = n;
        age = a;
        gpa = g;
    }

    void printInfo() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "GPA: " << gpa << endl;
    }

    void birthday() {
        age++;
    }

    void changeGPA(double newGPA) {
        gpa = newGPA;
    }

    string getName() {
        return name;
    }

    double getGPA() {
        return gpa;
    }
};

int main() {

    Student student1("Alex", 19, 3.5);
    Student student2("Sarah", 20, 3.9);

    student1.printInfo();

    cout << endl;

    student2.printInfo();

    cout << endl;

    student1.birthday();
    student1.changeGPA(3.7);

    cout << student1.getName() << " now has a GPA of "
         << student1.getGPA() << endl;

    return 0;
}
