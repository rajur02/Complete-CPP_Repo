#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

using namespace std;

int main() 
{
    string str{"Hello World"};
    cout << "String to search: " << str << endl;

    string vowels{"aeiou"};

    //find_first_of()
    //returns the iterator to the first character in "vowels"
    auto vowel = find_first_of(cbegin(str), cend(str), cbegin(vowels), cend(vowels));

    if(vowel != cend(str))
        cout << "First vowel is: " << *vowel << " at index: " << distance(cbegin(str), vowel) << endl;  //First vowel is: e at index: 1

    //Returns an iterator to the next vowel
    auto vowel2 = find_first_of(next(vowel), cend(str), cbegin(vowels), cend(vowels));

    if(vowel2 != cend(str))
        cout << "Second vowel is: " << *vowel2 << " at index: " << distance(cbegin(str), vowel2) << endl;   //Second vowel is: o at index: 4

    //adjacent_find()
    auto pos = adjacent_find(cbegin(str), cend(str));
    
    if(pos != cend(str))
        cout << "Found adjacent elements with value: " << *pos << " at index: " << distance(cbegin(str), pos) << endl;  //Found adjacent elements with value: l at index: 2

    //search_n()
    vector<int> vec {1,2,2,3,2,3,3};

    auto pos1 = search_n(cbegin(vec), cend(vec),2,3);
    if(pos1 != cend(vec))
        cout << "Found two elements with value: " << *pos1 << ", starting at index: " << distance(cbegin(vec), pos1) << endl;  //Found two elements with value: 3, starting at index: 5

    //search()
    string sub{"Wo"};
    cout << "Searching for substring" << endl;

    auto pos2 = search(cbegin(str), cend(str), cbegin(sub), cend(sub));
    if(pos2 != cend(str))
        cout << "Found substring: " << sub << ", starting at index: " << distance(cbegin(str), pos2) << endl; //Found substring: Wo, starting at index: 6
    else
        cout << "No match found" << endl;
}