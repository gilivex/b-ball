#include <iostream>
#include <sstream>
#include "Team.hpp"
#include "Game.hpp"
#include <unordered_map>
#include <vector>
using namespace std;

string my_teams[20] = {
        "Miami_Heat",
        "Boston_Celtics",
        "Toronto_Raptors",
        "Brooklyn_Nets",
        "Cleveland_Cavaliers",
        "Chicago_Bulls",
        "Washington_Wizards",
        "Indiana_Pacers",
        "Detroit_Pistons",
        "Orlando_Magic",
        "Phoenix_Suns",
        "Memphis_Grizzlies",
        "Golden_State_Warriors",
        "Dallas_Mavericks",
        "Utah_Jazz",
        "Denver_Nuggets",
        "San_Antonio_Spurs",
        "Los_Angeles_Lakers",
        "Sacramento_Kings",
        "Houston_Rockets"};
class Leauge {

private:
    vector<Team*> season;

public:
    Leauge(vector<Team*>&s):season(s){
        if (s.size()==0){
            for (int i = 0; i <20 ; ++i) {
              s.push_back(new Team(my_teams[i]));
            }
        }
        if (s.size()<20)

    };
    ~Leauge()
};




