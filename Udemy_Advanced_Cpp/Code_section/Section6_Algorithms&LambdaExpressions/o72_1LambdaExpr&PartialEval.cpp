#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

//Function which returns lambda function
auto greeter(const string& salutation) {
    return [salutation] (const string& name) { return salutation + ", " + name; };
}

int main()
{
    vector<string> words{"a", "collection", "of", "words", "varying", "lengths"};
    int max{3};  

    //variable which returns the lambda expression
    auto is_longer_than = [max] (const string& str) { return str.size()>max;};
    auto res = find_if(cbegin(words), cend(words), is_longer_than); 

    if(res!=cend(words)) {
        cout << R"(The firest word which is more than )" << max << R"( letters long is ")";
        cout << *res << R"(")" << endl;

    //store the lambda function in a variable
    auto greet = greeter("Hello");

    //call the lambda function
    cout << "Greeting: " << greet("Students") << endl;
    cout << "Greeting: " << greet("James") << endl;
    }

    auto greet_formal = greeter("Good Morning");
    cout << "Greeting: " << greet_formal("Raj") << endl;
}