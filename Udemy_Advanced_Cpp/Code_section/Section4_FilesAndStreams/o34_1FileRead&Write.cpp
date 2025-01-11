#include <iostream>
#include <string>
#include <vector>
#include <fstream>
using namespace std;

int main()
{
    ifstream ifile{"text.txt"};
    string text{""};
    if(ifile) {
        //while(ifile >> text) {
        //    cout << text << ", ";
        while(getline(ifile,text)) {
            cout << text << endl;
        }
    }
    cout << endl;
    ifile.close();

    ofstream ofile("text_out.txt");
    if(ofile) {
        vector<string> words {"The", "quick", "brown", "fox", "jumps", "over", "the", "lazy", "dog" };
        for(auto word : words)
            ofile << word << ", ";
        ofile.close();
    }
}