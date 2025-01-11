#include<iostream>
#include<map>
#include<unordered_map>

using namespace std;

int main()
{
    unordered_multimap<string, int> unsorted_scores;
    unsorted_scores.insert({"Graham", 78});
    unsorted_scores.insert({"Grace", 66});
    unsorted_scores.insert({"Graham", 66});
    unsorted_scores.insert({"Hareesh", 77});
    unsorted_scores.insert({"Graham", 66});
    unsorted_scores.insert({"James", 99});

    cout << "Unsorted: " << endl;
    for(auto it : unsorted_scores) 
        cout << it.first << " has a score of " << it.second << endl;
    /*Unsorted: 
    James has a score of 99
    Hareesh has a score of 77
    Graham has a score of 66
    Graham has a score of 66
    Graham has a score of 78
    Grace has a score of 66*/
    
    cout << endl;

    multimap<string, int> sorted_scores;
    
    copy(begin(unsorted_scores), end(unsorted_scores), inserter(sorted_scores, end(sorted_scores)));

    cout << "Sorted: " << endl;
    for(auto it : sorted_scores) 
        cout << it.first << " has a score of " << it.second << endl;
    /*Sorted:
    Grace has a score of 66
    Graham has a score of 66
    Graham has a score of 66
    Graham has a score of 78
    Hareesh has a score of 77
    James has a score of 99*/
}