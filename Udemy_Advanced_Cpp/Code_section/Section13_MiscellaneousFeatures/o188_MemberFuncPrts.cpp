#include <iostream>
#include <string>
#include <vector>
#include <functional>

using namespace std;
using namespace std::placeholders;

class Test {
    public:
    void func(int a, const string& b) {
		cout << "func called with arguments " << a << " and " << b << endl;
	}
};

// Class with a member function which will be used with std::bind()
class matcher {
	public:
	bool match(const string& animal, const string& species) {
		return animal == species;
	}
};

int count_strings(vector<string> &texts, function<bool(const string&)> match_ptr) {
    int tally = 0;
    for(auto text : texts) {
        if(match_ptr(text)) {
            ++tally;
        }
    }

    return tally;
}

int main() {
	// Define pds as a pointer to a member function of Test
	void (Test::*pds) (int, const string&);     // We need the extra parentheses

	// Make pds point to the member function
	pds = &Test::func;                    // The '&' is not optional here
	
	Test test;
	(test.*pds)(42, "Hello"s);
	
	Test *ptest = &test;
	(ptest->*pds)(42, "Hello"s);



    // Define pfunc as a pointer to a member function of Test
	void (Test::*pfunc) (int, const string&);     // We need the extra parentheses

	// Make pfunc point to the member function
	pfunc = &Test::func;                          // The '&' is not optional here

	// C++11
	// auto pfunc = &Test::func;

	cout << "With Test object:\n";
	Test test;
	(test.*pfunc)(42, "Hello"s);

	cout << "\nThrough pointer to Test:\n";
	Test *ptest = &test;
	(ptest->*pfunc)(42, "Hello"s);



    // Define pfunc as a pointer to a member function of Test
	auto pfunc = &Test::func;

	// Generate a callable object from pds
	auto f = mem_fn(pfunc);

	// Invoke this callable object
	Test test;
	f(test, 42, "Hello"s);                      // Pass the "this" object as the first argument



    //bind() with member function pointer
    vector<string> animals = {"cat", "dog", "tiger", "lion", "bear", "cat", "giraffe"};
	
	matcher m;
	// Capture "cat" as the second argument to matcher::match()
	auto match_cat = bind(&matcher::match, &m, _1, "cat");

	// Pass the callable object to count_strings()
	auto n = count_strings(animals, match_cat);
	cout << R"(The vector contains )" << n << R"( occurrences of the word "cat")" << endl;
}