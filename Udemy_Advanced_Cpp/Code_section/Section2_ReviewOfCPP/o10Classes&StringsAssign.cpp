#include <iostream>
#include <string>
using namespace std;

class URL
{
    std::string protocol;
    std::string resource;
public:
    URL(const std::string& prot, const std::string& res);
    void print() const;  
};

URL::URL(const std::string& prot, const std::string& res) : protocol(prot), resource(res) {}

void URL::print() const {
    cout << protocol << "://" << resource << endl;
}

int main()
{
    URL url("http", "www.example.com/index.html");
    url.print();
}