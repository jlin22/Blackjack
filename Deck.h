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

