#include <iostream>
#include <string>

using namespace std;

class Team;
class Game {

private:
    string winner;

public:
    Game(Team& Home, Team& out){
    };

    string set_winner(Game&);

    ~Game();
};


