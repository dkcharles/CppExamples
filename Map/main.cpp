// https://www.freecodecamp.org/news/c-plus-plus-map-explained-with-examples/
// https://www.geeksforgeeks.org/map-vs-unordered_map-c/

#include <iostream>
#include <map>

using namespace std;

int main() {
    map<char, int> myMap;

    //initializing
    myMap['a'] = 10;
    myMap['b'] = 20;
    myMap['c'] = 30;
    myMap['d'] = 40;

    myMap.insert(make_pair('e', 50));
    myMap.insert(make_pair('f', 60));

    map<char, int>::iterator it;
    for (it = myMap.begin(); it != myMap.end(); ++it) {
        cout << it->first << " => " << it->second << endl;
    }

    return 0;
}