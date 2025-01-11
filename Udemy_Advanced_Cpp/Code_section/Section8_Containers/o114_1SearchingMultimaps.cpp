#include<iostream>
#include<map>
#include<string>
#include<algorithm>
#include<vector>

using namespace std;

void print(const pair<string, int>& score) {
    cout << "(\"" << score.first << "\", " << score.second << "), ";
}

int main()
{
    multimap<string, int> scores;
    scores.insert({"Graham", 78});
    scores.insert({"Grace", 66});
    scores.insert({"Graham", 66});
    scores.insert({"Hareesh", 77});
    scores.insert({"Graham", 66});

    cout << "Multimap elements: " << endl;  //Multimap elements: ("Grace", 66), ("Graham", 78), ("Graham", 66), ("Graham", 66), ("Hareesh", 77), 
    for(auto score : scores) 
        print(score);
    cout << endl;

    auto gra_first = scores.lower_bound("Graham");
    auto gra_last = scores.upper_bound("Graham");

    cout << endl << "Scores for Graham: " << endl;  //Scores for Graham: ("Graham", 78), ("Graham", 66), ("Graham", 66), 
    for(auto it=gra_first; it!=gra_last; ++it) 
        print(*it);
    
    auto gord_first = scores.lower_bound("Gordon");
    auto gord_last = scores.upper_bound("Gordon");

    cout << endl << endl << "lower_bound(\"Gordon\") returned ";  //lower_bound("Gordon") returned ("Grace", 66),
    print(*gord_first);
    cout << endl;

    cout << "upper_bound(\"Gordon\") returned ";  //upper_bound("Gordon") returned ("Grace", 66),
    print(*gord_last);

    cout << endl << "Scores for Gordon: " << endl;  //Scores for Gordon:
    for(auto it=gord_first; it!=gord_last; ++it) 
        print(*it);

    //To find an element with the value
    auto start = scores.lower_bound("Graham");
    auto finish = scores.upper_bound("Graham");

    for(auto it=start; it!=finish; ++it) {
        if(it->second == 66) {
            cout << "Found an element with key Graham and value 66!" << endl;  //Found an element with key Graham and value 66! 
            break;
        }
    }

    //equal_range()
    vector<pair<string, int>> results;
    auto gra_keys = scores.equal_range("Graham");

    cout << endl << "Results of Graham using equal_range: " << endl;  //Results of Graham using equal_range: ("Graham", 78), ("Graham", 66), ("Graham", 66),
    for(auto it=gra_keys.first; it!=gra_keys.second; ++it)
        print(*it);
    cout << endl;

    //C++17
    auto[start1, finish1] = scores.equal_range("Graham");
    cout << endl << "Results of Graham using equal_range: " << endl;  //Results of Graham using equal_range: ("Graham", 78), ("Graham", 66), ("Graham", 66),
    for(auto it=start1; it!=finish1; ++it)
        print(*it);
    cout << endl;

    //find_if()
    auto start2 = gra_keys.first;
    auto finish2 = gra_keys.second;

    auto res = find_if(start2, finish2, [](pair<string, int> p) {return p.second == 66;});
//     if(res != finish2) {
//         cout << "Found an element with key Graham and value 66!" << endl;  //Found an element with key Graham and value 66!
//     }

    //to print all the elements with value 66 using loop
    /*while(res!=finish2) {
        results.push_back(*res);

        ++res;
        res = find_if(res, finish2, [](pair<string, int> p) {return p.second == 66;});
    } */

    //to print all the elements with value 66 using algorithm copy_if
    copy_if(gra_keys.first, gra_keys.second, back_inserter(results), [](pair<string, int> p) {return p.second == 66;});

    for(auto result : results)
        print(result);   //("Graham", 66), ("Graham", 66),
    cout << endl;
}