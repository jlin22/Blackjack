#include "Deck.cpp"
using namespace std;
class Player{
public:
    Player(int id);
    std::string get_cards();
    int get_id(); 
    void add_card(Card c);
    int value();
    void set_stay();
    bool get_stay();
private:
    int id;
    std::vector<Card> cards;
    bool stay;
};

