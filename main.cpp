#include "iostream"
#include "Game.cpp"
using namespace std;

int main(){
    Game g;
    while(1){
        cout << g.declare_turn();
        int x;
        cin >> x; 
        g.next_turn();
    }
}

