#include "Player.cpp"
#include "Deck.cpp"
using namespace std;
class Game{
public:
    Game();
    int get_turn();
    void next_turn();
    std::string declare_turn(); 
private:
    std::vector<Player> players;
    Deck d(); 
    int turn = 0;
}1; 

