#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> vec {1,2,3,4};

    auto itr = begin(vec);
    if(itr!=end(vec)) {
        cout << "First element is: " << *itr << endl;
    }

    if(auto itr=begin(vec); itr!=end(vec)) {
        cout << "First element is: " << *itr << endl;
    }

    cout << endl;

    char c;
    int ws_count{0};

    const char *arr = "How much whitespace in\t here?";
    cout << "The text to process is \"" << arr << "\"" << endl;

    for(int i=0; arr[i]; ++i) {
        switch(const char c = arr[i]; c) {
            case ' ':
                [[fallthrough]]
            case '\t':
                [[fallthrough]]
            case '\n':
                ++ws_count;
                break;
            default:
                break;
        }
    }

    cout << "The text contains " << ws_count << " whitespace characters" << endl;
}