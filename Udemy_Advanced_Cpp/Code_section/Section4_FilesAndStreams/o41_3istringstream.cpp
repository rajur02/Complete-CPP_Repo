#include <iostream>
#include <sstream>
#include <fstream>
#include <vector>
using namespace std;

int main()
{
    ifstream infile{"data.txt"};
    if(!infile) {
        cout << "Could not open data.txt" << endl;
        return -1;
    }

    string line;
    vector<int> numbers;

    while(getline(infile, line)) {
        //validate etc
        istringstream is(line);
        int num;
        while(is >> num) {
            numbers.push_back(num);
        }
    }

    double sum{0.0};
    for(auto n : numbers) {
        cout << n << endl;
        sum+=n;
    }

    cout << "Average is: " << sum/numbers.size() << endl;
}