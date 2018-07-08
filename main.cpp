#include "Player.h"
#include "iostream"
#include "Deck.h"
using namespace std;

int main(){
    Deck d;
    Card c = d.get_card();
    cout << display_card(c);
    //Player p1(1);
    //cout << p1.get_id();
    return 1;
}

