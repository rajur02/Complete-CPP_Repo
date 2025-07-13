/* Write a program which will
Reads strings entered by the user
Store them in a sequential container
Print out the strings in the order they were entered

Questions for this assignment
Implement this program using std::vector to store the strings. Check that your program compiles and runs correctly.
Implement this program using std::list to store the strings. Check that your program compiles and runs correctly.
Implement this program using std::deque to store the strings. Check that your program compiles and runs correctly.
Change the list and deque versions so that they store the strings in reverse order.
Do not perform any manipulation on the container elements.
Check that your program compiles and runs correctly. */

#include <vector>
#include <list>
#include <deque>
#include <string>
#include <iostream>

int main() {
    std::vector<std::string> words;
    //std::list<std::string> words;
    //std::deque<std::string> words;
	
    for (std::string word; std::cin >> word;) {
        words.push_back(word);
        //words.push_front(word);    // Stores the strings in reverse order
    }
	
	for (std::vector<std::string>::iterator it = words.begin(); it != words.end(); ++it)
    //for (std::list<std::string>::iterator it = words.begin(); it != words.end(); ++it)
    //for (std::deque<std::string>::iterator it = words.begin(); it != words.end(); ++it)
    	std::cout << *it << "\n";
}