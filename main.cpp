#include "iostream"
#include "Game.cpp"
using namespace std;

int main(){
    Game g(2);
    while(1){
        g.display_board();
        std::string x;
        cin >> x; 
        g.parse_command(x);
    }
}

