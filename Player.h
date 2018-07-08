class Player{
public:
    Player(int id);
    int * get_cards();
    int get_id(); 
private:
    int id;
    int cards[5];
};

Player::Player(int id){
    this->id = id;  
}

int Player::get_id(){
    return id;
}