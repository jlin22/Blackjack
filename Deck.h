#include <vector>
#include "iostream" 
#include "Card.cpp"
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

