#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ofstream ofile("important.txt", ofstream::app);

    if(!ofile) {
        cout << "Could not open file!" << endl;
        return -1;
    }

    ofile << " some more data" << endl;
    ofile.close();
}