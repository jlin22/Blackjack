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
Game::Game(const int p){
    num_players = p;
    d = Deck();
    for (int id = 1; id <= num_players; ++id){  
        players.push_back(Player(id));
    }
    for (int i = 0; i <= 1; ++i){
        for (Player &p : players)
            p.add_card(d.get_card());         
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

std::string Game::ask_command(){
    std::string c = "What is Player ";
    c.append(std::to_string(turn + 1));
    c.append("'s decision? \t");
    return c; 
}

void Game::display_board(){
    std::cout << declare_turn(); 
    for (int id = 0; id < num_players; id++) 
        std::cout << "\t" <<  players[id].get_cards() << endl;
    std::cout << ask_command();
}
