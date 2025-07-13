/*You will write a program that:

Reads words entered by the user

Stores the value and length of each word in a suitable std::pair

Stores the pair object in a container

Prints out all the elements of the container

Questions for this assignment
Implement this program, using std::vector to store the data.

What do you notice about the output?

Implement this program, using std::map to store the data.

What do you notice about the output?

Explain your results.

Run your programs again, but this time enter some duplicate words.

Explain your results. */

#include <iostream>
#include <utility>  // for std::pair
#include <string>
#include <map>
#include <vector>

int main() {
	std::map<std::string, size_t> data;
	
	std::string word("");
	
	std::cin >> word;
		
	while (word != "stop") {
		data.insert(make_pair(word, word.length()));
		std::cin >> word;
	}
	
	std::cout << std::endl << "Words and length:\n";
	for (auto wd : data)
		std::cout << wd.first << ", " << wd.second << "\n";

    //vector
    using word_data = std::pair<std::string, size_t>;
	std::vector<word_data> data1;
	
	std::string word("");
	
	std::cin >> word;
		
	while (word != "stop") {
		word_data wd;
		wd.first = word;
		wd.second = word.length();
		data1.push_back(wd);
		std::cin >> word;
	}
	
	std::cout << std::endl << "Words and length:\n";
	for (auto wd : data)
		std::cout << wd.first << ", " << wd.second << "\n";
}