#include <vector>
#include "iostream" 
using namespace std;
enum class SUIT{Heart, Spades, Clubs, Diamonds};
enum class VALUE{Ace, Two, Three, Four, Five, Six, Seven, Eight, Nine, Ten, Jack, Queen, King};

struct Card{
    SUIT suit;
    VALUE val;
};

class Deck{
public:
    Deck();
private:
    std::vector<Card> cards;
};

Deck::Deck(){
    //const VALUE VALUES[] = {VALUE::Ace, VALUE::Two, VALUE::Three, VALUE::Four, VALUE::Five, VALUE::Six, VALUE::Seven, VALUE::Eight, VALUE::Nine, VALUE::Ten, VALUE::Jack, VALUE::Queen, VALUE::King};
    const SUIT SUITS[] = {SUIT::Heart, SUIT::Spades, SUIT::Clubs, SUIT::Diamonds};
}
