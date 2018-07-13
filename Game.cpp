#include "Game.h"
#include <ctype.h>
#include <algorithm>
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

void Game::next_turn(){
    turn = (turn + 1) % 2;    
}

std::string Game::declare_turn(){
    std::string t = "It is currently Player ";
    t.append(std::to_string(turn + 1));
    t.append("'s turn\n");
    return t;
}

//returns if comm == valid
bool Game::parse_command(std::string comm){
    trim(comm); 
    lower(comm);
    if (comm.compare("stay") == 0){
        players[turn].set_stay();
        next_turn();
    }
    else if (comm.compare("hit") == 0){
        players[turn].add_card(d.get_card());
        players[turn].set_bust();
        next_turn();
    }
    else
        return false;
    return true;
}

void Game::ask_command(){
    std::string c = "What is Player ";
    c.append(std::to_string(turn + 1));
    c.append("'s decision? \t");
    std::cout << c;
}

bool Game::game_over(){
    int b = 0;
    int s = 0;
    for (int id = 0; id < num_players; id++){
        if (players[id].get_stay() == true)
            s++;
        if (players[id].get_bust() == true)
            b++;
    }
    stay = (s == num_players);
    bust = (b >= num_players - 1);
    return stay || bust;
}

void Game::print_winner(){
    std::cout << "Game Over" << endl;
    if (stay){
        int max = 0;
        //whoever has the greater value
        if (players[1].value() > players[0].value())
            max = 1;
        std::cout << "Player " << max+1 << " wins with the highest value of " << players[max].value();
    }
    else if (bust){
        if (players[0].get_bust() == true){
            std::cout << "Player " << 2 << " wins";
        }
        else{
            std::cout << "Player " << 1 << " wins";
        }
    }
}

void Game::determine_winner(){
    return;
}
void Game::display_board(){
    std::cout << declare_turn(); 
    for (int id = 0; id < num_players; id++){
        std::cout << "\t" <<  players[id].get_cards() << endl;
        std::cout << "\t Value: " << players[id].value();
        if (players[id].get_bust() == true)
            std::cout << " (Busted)";
        std::cout << endl << "\t Stay: " << players[id].get_stay() << endl;
    }
}

void Game::run_game(){
    while(!game_over()){
        display_board();
        std::string x;
        do{
            ask_command();
            cin >> x;
        }
        while (!parse_command(x));
    }
    display_board(); 
    print_winner();    
}
