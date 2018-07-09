#include "Player.cpp"
#include "Deck.cpp"
class Game{
public:
    Game();
    int get_turn();
    void next_turn();
private:
    Player p1 = Player(1);
    Player p2 = Player(2); 
    Deck d(); 
    int turn = 1;
}; 

