#include "functions.h"
#include <iostream>
#include <string>
#include <unordered_set>

using namespace std;

int main() {
    vector<string> input = readFile("1input");
    unordered_set<int> seen;
    int level = 0;

    for (int i = 0; i < 10000; ++i) {
        for (string s: input) {
            int stringValue = stoi(s.substr(1, string::npos));
            if (s.front() == '+') {
                level += stringValue;
            } else {
                level -= stringValue;
            }
            if (seen.find(level) != seen.end()) {
                cout << level;
                return 0;
            } else {
                seen.insert(level);
            }
        }
    }

    
}