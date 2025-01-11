#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ofstream ofile("log.txt");
    if(!ofile) {
        cout << "Could not open file" << endl;
        return -1;
    }

    for(int i=0; i<1'000'000; i++) {
        // cout << i << flush;
        // ofile << i << flush;
        cout << i << endl;
        ofile << i << endl;
        
        if(i==66666)
        terminate();
    }
    ofile.close();

}
