#include <vector>
#include "iostream" 
#include "Card.h"
#include <ctime>
#include <cstdlib>
using namespace std;

class Deck{
public:
    Deck();
    Card get_card();
private:
    std::vector<Card> cards;
};

Deck::Deck(){
    srand(time(NULL));
    const VALUE VALUES[] = {VALUE::Ace, VALUE::Two, VALUE::Three, VALUE::Four, VALUE::Five, VALUE::Six, VALUE::Seven, VALUE::Eight, VALUE::Nine, VALUE::Ten, VALUE::Jack, VALUE::Queen, VALUE::King};
    const SUIT SUITS[] = {SUIT::Heart, SUIT::Spades, SUIT::Clubs, SUIT::Diamonds};
    for (VALUE v : VALUES){
        for (SUIT s : SUITS){
            Card c = {s, v};
            cards.push_back(c);
        }
    }
}

Card Deck::get_card(){
    int size = cards.size(); 
    return cards[rand() % size]; 
}
