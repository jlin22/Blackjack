#include "Game.h"
using namespace std;

//Deck already intialized
Game::Game(){
    int ids[] = {1,2};
    for (int id : ids){
        players.push_back(Player(id));
    }
}

int Game::get_turn(){
    return turn;
}

//Players = 2;
void Game::next_turn(){
    turn = (turn + 1) % 2;    
}

std::string Game::declare_turn(){
    std::string t = "It is currently Player ";
    t.append(std::to_string(turn + 1));
    t.append("'s turn");
    return t;
}
