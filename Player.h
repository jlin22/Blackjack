class Player{
public:
    Player();
    int * get_cards();
    int get_id(); 
    void set_id();
    ~Player();
private:
    int id;
    int cards[5];
};
