using namespace std;
enum class SUIT{Heart, Spades, Clubs, Diamonds};
enum class VALUE{Ace, Two, Three, Four, Five, Six, Seven, Eight, Nine, Ten, Jack, Queen, King};

struct Card{
    SUIT suit;
    VALUE val;
};

std::string display_card(Card& c){
    std::string card = "Suit: ";
    //std::string suits[]= {"H", "S", "C", "D"};
    //std::string values[] = {"A", "2", "3", "4", "5", "6", "7", "8", "9", "10", "J", "Q", "K"};
    switch(c.suit){
    case(SUIT::Heart):
        card.append("H");
        break;
    case(SUIT::Spades):
        card.append("S");
        break;
    case(SUIT::Clubs):
        card.append("C");
        break;
    case(SUIT::Diamonds):
        card.append("D"); 
        break;
    default:
        return "Invalid Suit";
    }
    card.append(", Value: ");
    switch(c.val){
    case(VALUE::Ace):
        card.append("A");
        break;
    case(VALUE::Two):
        card.append("2");
        break;
    case(VALUE::Three):
        card.append("3");
        break;
    case(VALUE::Four):
        card.append("4");
        break;
    case(VALUE::Five):
        card.append("5");
        break;
    case(VALUE::Six):
        card.append("6");
        break;
    case(VALUE::Seven):
        card.append("7");
        break;
    case(VALUE::Eight):
        card.append("8");
        break;
    case(VALUE::Nine):
        card.append("9");
        break;
    case(VALUE::Ten):
        card.append("10");
        break;
    case(VALUE::Jack):
        card.append("J");
        break;
    case(VALUE::Queen):
        card.append("Q");
        break;
    case(VALUE::King):
        card.append("K");
        break;
    default:
        return "Invalid Value";
    }
    return card; 
} 

std::string display_cards(std::vector<Card> cards){
    std::string card = "";
    for (Card& c : cards){
        card.append(display_card(c));
        card.append("\t");
    }
    return card;
}
