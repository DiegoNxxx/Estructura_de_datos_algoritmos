#ifndef HISTORY_H
#define HISTORY_H

#include <iostream>
#include <string>
#include <list> 

using namespace std;

class History {
private:
    list<string> records;

public:
    void addRecord(const string& record);
    void showHistory();
};

#endif