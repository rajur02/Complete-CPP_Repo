#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <functional>

using namespace std;
using namespace std::placeholders;

bool match(const string& animal) {
	cout << R"(argument is ")" << animal << R"(")" << endl;
	return animal == "cat";
}

bool match(const string& animal, const string& species) {
	cout << R"(1st argument is ")" << animal << R"(", 2nd argument is ")" << species << "\"" << endl;
	return animal == species;
}

int main() {
	vector<string> animals = {"cat", "dog", "tiger", "lion", "bear", "cat", "giraffe"};

    //match
	auto n = count_if(begin(animals), end(animals), match);
	cout << R"(The vector contains )" << n << R"( occurrences of the word "cat")" << endl;

    //match error
    cout << "The vector contains ";
	cout << count_if(count_if(begin(animals), end(animals), match("cat")) << endl;    // Error!
	cout << R"( occurrences of the word "cat")" << endl;

    //match algo
    cout << "The vector contains ";
	cout << count_if(begin(animals), end(animals), match_cat);  // animal passed as first argument to match
	cout << " occurrences of the word \"cat\"\n";


    //match with bind
    auto match_cat = bind(match, _1, "cat");                  // Captures "cat" as second argument

	if (match_cat("dog")) {                                   // Calls match("dog", "cat");
		cout << "Matched\n";
	}
	else {
		cout << "Not matched\n";
	}

    //match with bound lambda
    cout << "The vector contains ";
	cout << count_if(begin(animals), end(animals),
						// C++14 lambda-local variable
						[species="cat"s](const string& animal) {return match(animal, species);}
	); 
	cout << R"( occurrences of the word "cat")" << endl;
}