#include "iostream"
#include "Game.cpp"
using namespace std;

int main(){
    Game g;
    while(1){
        cout << g.declare_turn();
        std::string x;
        cin >> x; 
        g.parse_command(x);
    }
}

