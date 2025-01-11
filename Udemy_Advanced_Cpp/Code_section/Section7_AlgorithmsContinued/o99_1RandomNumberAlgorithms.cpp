#include<iostream>
#include<algorithm>
#include<random>
#include<vector>
#include<iterator>
using namespace std;

void print(const vector<int>& vec) {
    ostream_iterator<int> oi(cout, ", ");
    copy(vec.begin(), vec.end(), oi);
}

void print_vec(const vector<int> vec) {
    for(auto v : vec) {
        cout << v << ", ";
    }
    cout << endl;
}

int main()
{
    vector<int> vec{3,1,4,1,5,9};
    static mt19937 mt;

    //shuffle()
    cout << "Vector before shuffling: ";
    print_vec(vec);

    shuffle(begin(vec), end(vec), mt);

    cout << "Vector after shuffling: ";
    print_vec(vec);

    //bernoulli_distribution()
    bernoulli_distribution bd;
    if(bd(mt))
        cout << "Your subjects are grateful for your wise rule" << endl;
    else
        cout << "The peasants are revolting" << endl;

    //shuffle implementation
    uniform_int_distribution<int> uid(0, vec.size()-1);

    for(int i=0; i<vec.size(); ++i) {
        std::swap(vec[i], vec[uid(mt)]);
    }

    cout << "vector after shuffling: ";
    print(vec);
    
}