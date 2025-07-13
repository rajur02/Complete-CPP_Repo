/* This assignment will use the URL class you wrote for the "Classes and Strings" assignment.
Or you can use the solution for that assignment, which is in the attached ZIP file.

Questions for this assignment
Add a member function to the URL class which returns the URL as an std::string (e.g. "http://example.com/index.html")
Write a class which uses an STL container to store objects of your URL class. New objects are added at the front of the container.
Only add a URL object if the URL is not already in the history. If the URL is already present, move it to the front of the container.
Write a program to test your class. Check that your program compiles and runs correctly.
If you need help, click on the Instructor Example to get some hints.*/

#include <iostream>
#include <string>
#include <algorithm>
#include <deque>

using namespace std;

class URL {
    std::string protocol;
    std::string resource;
public:
    URL(const std::string& prot, const std::string& res);
    std::string get() const;
	void print() const;
};

URL::URL(const std::string& prot, const std::string& res) {
	protocol = prot;
	resource = res;
}
	
std::string URL::get() const {
	return protocol + "://" + resource;
}
	
void URL::print() const {
	std::cout << protocol << "://" << resource << "\n";
}

class url_equal {
	URL url;
	public:
	url_equal(const URL& url) : url(url) {}
	bool operator() (const URL& current) {
		return url.get() == current.get();
	}
};

class url_history {
    std::deque<URL> urls;     // Can also use std::list
  public:
    void add(const URL& url);
    void print();
};

void url_history::add(const URL& url) {
    deque<URL>::iterator it = find_if(urls.begin(), urls.end(), url_equal(url));
		
    if (it == urls.end()) {                                    // Not already present - insert at front
		urls.push_front(url);                                  // Insert at front
	}
	else if (it != urls.begin()) {                             // Already present - move to front
        urls.erase(it);
		urls.push_front(url);
    }
	else {                                                     // Already at front - do nothing
	}
}

void url_history::print() {
    for (deque<URL>::iterator it = urls.begin(); it != urls.end(); ++it)
		std::cout << it->get() << "\n";
}

int main() {
	url_history uh;
	URL u1("http", "example.com/index.html");
	uh.add(u1);
	URL u2("https", "example.com/index.html");
	uh.add(u2);
	URL u3("https", "example.com/index.html");
	uh.add(u3);
	URL u4("https", "www.cplusplus.com/reference/deque/deque/erase/");
	uh.add(u4);
	URL u5("https", "example.com/index.html");
	uh.add(u5);
	URL u6("https", "example.com/index.html");
	uh.add(u6);
	URL u7("https", "www.cplusplus.com/reference/deque/deque/erase/");
	uh.add(u7);
	uh.print();
}