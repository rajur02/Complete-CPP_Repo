#include<iostream>
#include<map>
using namespace std;

class book_idx {
private:
    string author;
    string title;
public: 
    book_idx(const string& author, const string& title) : author(author), title(title) {}
    bool operator < (const book_idx& other) const {
        if(author == other.author) 
            return title < other.title;
        return author < other.author;
    }
    friend ostream& operator << (ostream&os, const book_idx& bkx) {
        os << bkx.author << ", " << bkx.title;
        return os;
    }
};

class book {
private:
    string publisher;
    string edition;
    int date;
public:
    book(string publisher, string edition, int date) : publisher(publisher), edition(edition), date(date) {}
    friend ostream& operator<<(ostream& os, const book& bk) {
        os << "(" << bk.publisher << ", " << bk.edition << ", " << bk.date << ")";
        return os;
    }
};

int main()
{
    multimap<book_idx, book> library;
    book prog_princs("Addison-Wisley", "2nd edition", 2014);
    book_idx prog_princs_idx("Stroustrup, Bjarne", "Programming principles and practice");
    library.insert(make_pair(prog_princs_idx, prog_princs));

    book cpp_primer("Addison-Wisley", "5th edition", 2014);   
    book_idx cpp_primer_idx("Lippman, Stanly", "C++ Primer");   
    library.insert(make_pair(cpp_primer_idx, cpp_primer));

    book cpp_prog("Addison-Wisley", "4th edition", 2013);
    book_idx cpp_prog_idx("Stroustrup, Bjarne", "The C++ Programming language");
    library.insert(make_pair(cpp_prog_idx, cpp_prog));

    book cpp_tour("Addison-Wisley", "1st edition", 2018);
    book_idx cpp_tour_idx("Stroustrup, Bjarne", "A tour of C++");
    library.insert(make_pair(cpp_tour_idx, cpp_tour));

    for(auto b : library) {
        cout << b.first << ", " << b.second << endl;
    }
}