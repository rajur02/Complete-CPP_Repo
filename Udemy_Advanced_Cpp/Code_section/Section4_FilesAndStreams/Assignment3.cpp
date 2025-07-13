/* You are given the attached languages.txt file and the following type definition:

struct language {
    string lang;
    string designer;
    int date;
};
The format of the languages.txt file is:

C++ Stroustrup 1979
Java Gosling 1991
Write a program which will:

Read in the data from the attached languages.txt file

Use each line of input to populate a language object

Add this object to a vector

Print out all the data in the vector, separated by commas

Your output should look like this:

C++, Stroustrup, 1979
Java, Gosling, 1991  */

#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
using namespace std;

struct language {
	string lang;
	string designer;
	int date;
};

int main()
{
    ifstream langFile{"languages.txt"};
    vector<language> languages;
    if(langFile) {
        string line;
        while(getline(langFile, line)) {
            string lang;
            string designer;
            int year;

            istringstream istring{line};
            istring >> lang;
            istring >> designer;
            istring >> year;

            languages.push_back({lang, designer, year});
        }

        for(auto language : languages) {
            cout << language.lang << ", " << language.designer << ", " << language.date << endl;
        }

    }

}