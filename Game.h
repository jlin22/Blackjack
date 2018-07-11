#include "Player.cpp"
class Game{
public:
    Game(int p);
    int get_turn();
    void next_turn();
    std::string declare_turn(); 
    void parse_command(std::string comm);
    void display_board();
    std::string ask_command();
private:
    std::vector<Player> players;
    Deck d; 
    int turn = 0;
    int num_players;
}; 

