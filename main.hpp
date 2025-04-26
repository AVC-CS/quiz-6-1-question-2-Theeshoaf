#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int writeFile(const string &filename);
int readFile(const string &filename);

int writeFile(const string &filename) {
    ofstream file(filename);
    int empCount = 3; 

    if (file.is_open()) {
        for (int i = 0; i < empCount; ++i) {
            file << "Employee " << i + 1 << endl; 
        }
        file.close();
    } else {
        cout << "Unable to open file for writing" << endl;
        return 0;
    }
    return empCount;
}

int readFile(const string &filename) {
    ifstream file(filename);
    int empCount = 0;
    string line;

    if (file.is_open()) {
        while (getline(file, line)) {
            empCount++;
        }
        file.close();
    } else {
        cout << "Unable to open file for reading" << endl;
    }
    return empCount;
}