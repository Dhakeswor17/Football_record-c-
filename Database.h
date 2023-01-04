#pragma once
#include "Match.h"
#include "Database.h"
#include <vector>
#include <iostream>
#include <fstream>

using namespace std;

class Database{

public:
    void initialize();
    void save();
    void read();
    void add();
    void correction();
    void print_team_report();
    void print_location();

private:
    vector<Match> matches;

};