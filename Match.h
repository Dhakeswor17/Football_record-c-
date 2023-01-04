#pragma once

#include <iostream>
#include <vector>

using namespace std;

class Match {

    friend ostream& operator<< (ostream& output, const Match& matches);
    friend istream& operator>> (istream& input, Match& m);

public:
    //int get_max_width(Person p);
   // bool operator== (const string& p2_name) const;
  // void add ();
    //void print_person_in_given_city(Person p, string user_input_city);
   // void print_all(Person p);

private:
    string homeTeam, opposingTeam, homeTeamScore, opponentTeamScore, location ;
};
