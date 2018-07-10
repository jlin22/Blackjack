#include "Player.cpp"
using namespace std;
class Game{
public:
    Game();
    int get_turn();
    void next_turn();
    std::string declare_turn(); 
    void parse_command(std::string comm);
    void display_board();
private:
    std::vector<Player> players;
    Deck d; 
    int turn = 0;
}; 

