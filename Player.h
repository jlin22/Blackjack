#include "Deck.cpp"
using namespace std;
class Player{
public:
    Player(int id);
    std::string get_cards();
    bool allow_split();
    int get_id(); 
    void add_card(Card c);
    int value();
    void set_stay();
    bool get_stay();
    void set_bust();
    bool get_bust();
private:
    int id;
    std::vector<Card> cards;
    bool stay;
    bool bust;
};

