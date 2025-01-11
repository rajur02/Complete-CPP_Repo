#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Student { 
    string name;
    int id;
public:
    Student(string n, int i) : name(n), id(i) {}
    friend bool operator<(const Student& lhs, const Student& rhs);
    void print();
};

bool operator<(const Student& lhs, const Student& rhs) {
    //return (lhs.name < rhs.name);
    return (lhs.id < rhs.id);
}
void Student::print() {
    cout << "Name: " << name << " Id: " << id << endl;
}

int main()
{
    Student stu1("John Smith", 561234);
    Student stu2("John Smith", 853811);
    Student stu3("Jack Jones", 362837);

    cout << "Stu1: ";
    stu1.print(); 
    cout << "Stu2: ";
    stu2.print();
    cout << "Stu3: ";
    stu3.print();

    vector<Student> students {stu1, stu2, stu3};

    cout << "Vector before sorting: " << endl;
    for(auto student : students) {
        student.print();
    }
    cout << endl;

    sort(begin(students), end(students));

    cout << "Vector after sorting: " << endl;
    for(auto student : students) {
        student.print();
    }

    cout << boolalpha << endl;
    /* cout << "Stu1 < Stu2: " << (stu1<stu2) << endl;
    cout << "Stu1 < Stu3: " << (stu1<stu3) << endl << endl; 
    cout << "Stu2 < Stu1: " << (stu2<stu1) << endl;
    cout << "Stu2 < Stu3: " << (stu2<stu3) << endl << endl;
    cout << "Stu3 < Stu1: " << (stu3<stu1) << endl;
    cout << "Stu3 < Stu2: " << (stu3<stu2) << endl; */
}