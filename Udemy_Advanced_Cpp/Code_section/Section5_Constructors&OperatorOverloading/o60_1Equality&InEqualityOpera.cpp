#include <iostream>
using namespace std;

class Student { 
    string name;
    int id;
public:
    Student(string n, int i) : name(n), id(i) {}
    friend bool operator==(const Student& lhs, const Student& rhs);
    friend bool operator!=(const Student& lhs, const Student& rhs);
    void print();
};

bool operator==(const Student& lhs, const Student& rhs) {
    if(lhs.name == rhs.name) {
        return true;
    }
    return false;
}

bool operator!=(const Student& lhs, const Student& rhs) {
    return !(lhs==rhs);
}

void Student::print() {
    cout << "Name: " << name << " Id: " << id << endl;
}

int main()
{
    Student stu1("John Smith", 561234);
    Student stu2("John Smith", 453811);
    Student stu3("Jack Jones", 362837);

    cout << "Stu1: ";
    stu1.print(); 
    cout << "Stu2: ";
    stu2.print();
    cout << "Stu3: ";
    stu3.print();

    cout << boolalpha << endl;
    cout << "Stu1 == Stu2: " << (stu1==stu2) << endl;
    cout << "Stu1 != Stu2: " << (stu1!=stu2) << endl;
    cout << "Stu1 == Stu3: " << (stu1==stu3) << endl;
    cout << "Stu1 != Stu3: " << (stu1!=stu3) << endl;
    cout << "Stu2 == Stu3: " << (stu2==stu3) << endl;
    cout << "Stu2 != Stu3: " << (stu2!=stu3) << endl;
}