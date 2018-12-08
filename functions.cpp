#include "functions.h"
#include <fstream>
#include <iostream>

using namespace std;

vector<string> readFile(string fileName) {
    vector<string> result;
    ifstream inFile;
    inFile.open(fileName);
    if (!inFile) {
        cerr << "Unable to open file " << fileName;
        exit(1);
    }
    string line;
    while (getline(inFile, line)) {
        result.push_back(line);
    }
    inFile.close();
    return result;
};