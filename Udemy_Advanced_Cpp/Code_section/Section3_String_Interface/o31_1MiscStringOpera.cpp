#include <iostream>
#include <vector>
using namespace std;

void print(int *arr, size_t size) {
    for(int i=0; i<size; i++)
        cout << arr[i] << ", ";
    cout << endl;
}

int main()
{
    //string/vector data()
    std::vector<int> numbers{1,2,3,4,5};
    print(numbers.data(), numbers.size());
    cout << endl;   

    //string swap() and global swap()
    string s1{"Hello"};
    string s2{"Goodbye"};

    cout << "calling member function swap()" << endl;
    s1.swap(s2);
    cout << "s1: " << s1 << " s2: " << s2 << endl; 

     cout << "calling global function swap()" << endl;
    swap(s1,s2);
    cout << "s1: " << s1 << " s2: " << s2 << endl;  
}