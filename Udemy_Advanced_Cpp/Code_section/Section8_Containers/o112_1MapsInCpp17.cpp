/*To run the program for C++17 on windows
c++ -std=c++17 o112_1MapsInCpp17.cpp
.\a.exe
*/

#include<iostream>
#include<map>
#include<string>
#include<algorithm>
using namespace std;

// int main()
// {
//     pair p(1,3.142);
//     auto [i,d] = p;
//     cout << "i = " << i << ", d = " << d << endl;
// }

void print(const map<string, int>& scores) {
    cout << "Map elements:" << endl;

    for(auto it : scores) {
        cout << it.first << " has a score of " << it.second << endl;
    }
    cout << endl;
}

int main()
{
    map<string, int> scores;
    scores.insert(make_pair("Maybelline", 86));
    scores.insert({"Graham", 78});

    print(scores);

    cout << "using structured binding" << endl;
    cout << "Map Elements: " << endl;
    for (auto [name, score] : scores) {
        cout << name << " has score of " << score << endl;
    }
    cout << endl;

    //return value from insert()
    /* auto [iter, success] = scores.insert(make_pair("Graham", 66));

    if(success) {
        cout << "Inserted the element" << endl;
    }
    else {
        auto [name, score] = *iter;
        cout << "Insert failed: existing element with name " << name << " and score " << score << endl;
    }

    cout << "Map Elements: " << endl;
    for (auto [name, score] : scores) {
        cout << name << " has score of " << score << endl;
    }
    cout << endl; */

    //insert_or_assign()
    /* auto [iter, success] = scores.insert_or_assign("Graham", 66);
    auto [name, score] =  *iter;

    if(success) {
        cout << "Inserted new element with name " << name << " and score " << score << endl;
    }
    else {
        cout << "Existing element with name " << name <<" now has score " << score << endl;
    }

    cout << "Map Elements: " << endl;
    for (auto [name, score] : scores) {
        cout << name << " has score of " << score << endl;
    }
    cout << endl; */

    //initializer in if statement
    if(auto [iter, success] = scores.insert_or_assign("Graham", 66); success) {
        cout << "Inserted new element" << endl;
    }
    else {
        auto [name, score] =  *iter;
        cout << "Existing element with name " << name <<" now has score " << score << endl;
    }

    cout << "Map Elements: " << endl;
    for (auto [name, score] : scores) {
        cout << name << " has score of " << score << endl;
    }
    cout << endl;

}