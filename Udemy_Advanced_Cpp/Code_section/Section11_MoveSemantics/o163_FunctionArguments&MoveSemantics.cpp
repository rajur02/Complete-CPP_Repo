#include <iostream>
#include <string>

using namespace std;

//value
class Test { 
    string m_str;
public:
    Test(string str) : m_str(str) {}
};

int main() {
	string name;
	Test ltest(name);                      // Lvalue passed - name is copied into str
                                           // str is copied into m_str

	Test rtest(std::move(name));           // Rvalue passed - name is moved into str
                                           // str is copied into m_str
}

//const lvalue
/*class Test { 
    string m_str;
public:
    Test(const string& str) : m_str(str) {}
};

int main() {
	string name;
	Test ltest(name);                      // Lvalue passed - str binds to name
                                           // str is copied into m_str

	Test rtest(std::move(name));           // Rvalue passed - str binds to name
                                           // str is copied into m_str
}
                                           

//value then move
class Test { 
    string m_str;
public:
    Test(string str) : m_str(std::move(str)) {}
};

int main() {
	string name;
	Test ltest(name);                      // Lvalue passed - name is copied into str
                                           // str is moved into m_str

	Test rtest(std::move(name));           // Rvalue passed - name is moved into str
                                           // str is moved into m_str
}
                                           

//rvalue reference
class Test { 
    string m_str;
public:
    Test(string&& str) : m_str(std::move(str)) {}
};

int main() {
	string name;
	//Test ltest(name);                                  // Compiler error

	Test rtest(std::move(name));                       // Rvalue passed - str binds to name
                                                       // str is moved into m_str
}*/

