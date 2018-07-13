#include "Player.cpp"
class Game{
public:
    Game(int p);
    int get_turn();
    void next_turn();
    std::string declare_turn(); 
    bool parse_command(std::string comm);
    void display_board();
    void ask_command();
    bool game_over();
    void run_game();
    void determine_winner();
    void print_winner();
private:
    std::vector<Player> players;
    Deck d; 
    int turn = 0;
    int num_players;
    //either stay or bust becomes true once the game ends
    bool stay; 
    bool bust; 
    int active_players;
}; 

/* Issues to contend with:
Conditions for game over (bust, stay) done
Skipping turns for stay
Who won (whoever busts loses, if both stay then highest value)
*/

