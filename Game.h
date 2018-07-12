#include "Player.cpp"
class Game{
public:
    Game(int p);
    int get_turn();
    void next_turn();
    std::string declare_turn(); 
    bool parse_command(std::string comm);
    void display_board();
    std::string ask_command();
    bool game_over();
    void run_game();
    void determine_winner();
private:
    std::vector<Player> players;
    Deck d; 
    int turn = 0;
    int num_players;
}; 

