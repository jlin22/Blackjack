#include "Deck.cpp"
using namespace std;
class Player{
public:
    Player(int id);
    std::vector<Card> get_cards();
    int get_id(); 
    void add_card(Card c);
private:
    int id;
    std::vector<Card> cards;
};

