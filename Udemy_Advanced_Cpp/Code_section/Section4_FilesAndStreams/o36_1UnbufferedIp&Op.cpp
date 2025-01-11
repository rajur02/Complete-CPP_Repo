#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    /* cout << "Enter some text: " << endl;
    
    char c;
    while(cin.get(c)) {
        cout.put(c);
    } */

    const int filesize{10};
    char filebuf[filesize];
    string filename{"input.txt"};

    ifstream ifile(filename);

    if(!ifile) {
        cout << "could not open: " << filename << endl;
        return -1;
    }

    ifile.read(filebuf,filesize);
    auto nread = ifile.gcount();
    ifile.close();

    cout << nread << " bytes are read from " << filename << endl;
    cout << "File data: ";
    cout.write(filebuf, filesize);
    cout << endl;
}