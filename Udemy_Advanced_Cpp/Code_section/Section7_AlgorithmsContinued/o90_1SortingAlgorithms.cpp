#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;

class Student { 
    string name;
    int id;
public:
    Student(string n, int i) : name(n), id(i) {}
    friend bool operator==(const Student& lhs, const Student& rhs);
    friend bool operator!=(const Student& lhs, const Student& rhs);
    friend bool operator<(const Student& lhs, const Student& rhs);
    void print();
};

bool operator==(const Student& lhs, const Student& rhs) {
    if (lhs.name == rhs.name) {
        return true;
    }
    else { 
        return false;
    }
}

bool operator!=(const Student& lhs, const Student& rhs) {
    return !(lhs == rhs);
}

bool operator<(const Student& lhs, const Student& rhs) {
    return (lhs.name < rhs.name);
    //return (lhs.id < rhs.id);
}

void Student::print() {
    cout << "Name: " << name << " Id: " << id << endl;
}

int main()
{
    Student stu1("John Smith", 561234);
    Student stu2("John Smith", 853811);
    Student stu3("Jack Jones", 262184);
    Student stu4("Jack Jones", 692837);

    vector<Student> students {stu1, stu2, stu3, stu4};

    cout << "Vector before sorting: " << endl;
    for(auto student : students) {
        student.print();
    }
    cout << endl;

    //sort(begin(students), end(students));
    stable_sort(begin(students), end(students));

    cout << "Vector after sorting: " << endl;  
    for(auto student : students) {
        student.print();
    }
    /* Vector after sorting:
    Name: Jack Jones Id: 262184
    Name: Jack Jones Id: 692837
    Name: John Smith Id: 561234
    Name: John Smith Id: 853811  */
}