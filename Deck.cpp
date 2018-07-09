#include "Deck.h"
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
    int i = rand() % size;
    Card c = cards[rand() % size];
    cards.erase(cards.begin() + i);
    return c;
}
