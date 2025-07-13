#include<iostream>
#include<list>
#include<random>
#include<array>
#include<algorithm>
#include<unordered_map>
using namespace std;

int main() 
{
    mt19937 mt;
    uniform_int_distribution<int> dist(1,100);

    std::array<list<int>, 10> buckets;

    for(int i=0; i<150; ++i) {
        int num = dist(mt);
        int idx = (num-1)/10;
        buckets[idx].push_back(num);
    } 

    for(int i=0; i<10; ++i) {
        auto bucket = buckets[i];
        cout << "Bucket " << i << ": ";
        for(auto n : bucket) 
            cout << n << ", ";
        cout << endl;
    }

    /*Bucket 0: 10, 1, 4, 4, 5, 10, 4, 6, 4, 1, 2, 2, 
    Bucket 1: 14, 13, 19, 16, 11, 15, 12, 18, 18, 15, 13, 13, 19, 17, 12, 16, 14, 15,
    Bucket 2: 23, 28, 30, 22, 28, 22, 28, 23, 26, 24, 26, 26, 30, 25, 22, 
    Bucket 3: 31, 37, 40, 40, 31, 32, 32, 39, 35, 34,
    Bucket 4: 49, 43, 48, 43, 50, 44, 41, 49, 46, 45, 49, 46, 50, 42, 43,
    Bucket 5: 55, 55, 51, 58, 59, 51, 59, 55,
    Bucket 6: 64, 64, 66, 69, 68, 66, 70, 67, 65, 68, 66, 65, 70,
    Bucket 7: 73, 80, 80, 80, 76, 75, 75, 71, 80, 77, 77, 80, 80, 71, 76, 71, 72, 78, 76, 77, 
    Bucket 8: 82, 84, 81, 88, 85, 88, 83, 83, 81, 88, 81, 83, 83, 90, 81, 85, 82,
    Bucket 9: 91, 97, 92, 100, 96, 100, 97, 97, 98, 99, 96, 92, 96, 94, 100, 96, 93, 96, 95, 96, 99, 93,*/

    cout << endl;

    //Find a number in hashmap
    int target{43};
    int idx = (target-1)/10;
    cout << "Looking for target " << target << " in bucket " << idx << endl;  //Looking for target 43 in bucket 4
    auto it = find(cbegin(buckets[idx]), cend(buckets[idx]), target);

    if(it != cend(buckets[idx]))
        cout << "Found target " << target << " in bucket " << idx << endl;  //Found target 43 in bucket 4

    cout << endl;

    //unordered_map
    //unordered_map<string, int> scores; 
    /*Hareesh has a score of 77
    Graham has a score of 78
    Grace has a score of 66*/
    
    unordered_multimap<string, int> scores;
    /*Hareesh has a score of 77
    Graham has a score of 66
    Graham has a score of 66
    Graham has a score of 78
    Grace has a score of 66*/
    scores.insert({"Graham", 78});
    scores.insert({"Grace", 66});
    scores.insert({"Graham", 66});
    scores.insert({"Hareesh", 77});
    scores.insert({"Graham", 66});

    for(auto it : scores)
        cout << it.first << " has a score of " << it.second << endl;
}