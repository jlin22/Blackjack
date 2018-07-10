#include "Game.h"
#include <ctype.h>
using namespace std;

std::string& lower(std::string& str){
    for (int i = 0; i < str.length(); i++){
        str[i] = tolower(str[i]);
    }
    return str;
}
std::string& trim(std::string& str, const std::string& chars = "\t\n\v\f\r "){
    str.erase(0, str.find_first_not_of(chars));
    str.erase(str.find_last_not_of(chars) + 1);
    return str;
}

//Deck already intialized
Game::Game(){
    int ids[] = {1,2};
    for (int id : ids){
        players.push_back(Player(id));
    }
    d = Deck();
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
    t.append("'s turn\n");
    return t;
}

void Game::parse_command(std::string comm){
    trim(comm); 
    lower(comm);
    if (comm.compare("stay") == 0){
        next_turn();
    }
    if (comm.compare("hit") == 0){
        players[turn].add_card(d.get_card());
        next_turn();
    }
}

void display_board(){
}
