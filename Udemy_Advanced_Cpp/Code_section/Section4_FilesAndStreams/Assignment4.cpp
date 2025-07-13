/* The file format has changed from the program in the first part of this workshop. It now looks like this:

C Kernighan & Ritchie 1970
C++ Stroustrup 1979
Java Gosling 1991
C# Hejlsberg 1999
Python van Rossum 1991
Modify your program so that it handles the attached languages2.txt correctly */

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
    ifstream langFile{"languages2.txt"};
    vector<language> languages;
    if(langFile) {
        string line;
        while(getline(langFile, line)) {
            string lang;
            string designer;
            int year;

            istringstream istring{line};
            istring >> lang;

            string temp;
            istring >> temp;
            designer = temp;

            istring >> temp;
            while(!isdigit(temp[0])) {
                designer += " " + temp;
                istring >> temp;
            }

            year = stoi(temp);

            languages.push_back({lang, designer, year});
        }

        for(auto language : languages) {
            cout << language.lang << ", " << language.designer << ", " << language.date << endl;
        }
    }
}