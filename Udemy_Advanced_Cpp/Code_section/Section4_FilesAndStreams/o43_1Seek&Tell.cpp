#include <iostream>
#include <sstream>
#include <string>
using namespace std;

int main()
{
    ostringstream output;
    string data{"It is time to say "};
    output << data;

    auto marker = output.tellp();
    cout << data.size() << " characters written to stream" << endl;
    cout << "stream marker is " << marker << " bytes into the stream" << endl;

    output << "hello";
    cout << "stream marker is now " << output.tellp() << " bytes into the stream" << endl;

    cout << output.str() << endl;

    if(marker != -1) {
        output.seekp(marker);
    }

    output << "good night";
    cout << output.str() << endl;
}