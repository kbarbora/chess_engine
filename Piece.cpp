//
// Created by kb on 12/19/20.
//

class Piece {

protected:
    bool myMoveable;
    bool myEat_them;
    bool myEat_me;
    char myRowPosit;
    char myColPosit;
    bool myPlaying;
private:
    char myType;
    char myColor;
    char myMove_pattern;
    char myEat_pattern;
    char myMax_squares;
//    char *myEaten;
public:
    Piece(char type, char color, char move_pattern, char eat_pattern, char max_squares){
        myType = type;
        myColor = color;
        myMove_pattern = move_pattern;
        myEat_pattern = eat_pattern;
        myMax_squares = max_squares;
    }

//    Piece(char type, char color, bool moveable, bool eat_it, bool eat_me) {
//        myType = type;
//        myColor = color;
//        myMoveable = moveable;
//        myEat_them = eat_it;
//        myEat_me = eat_me;
//    }

    ~Piece() = default;

    char getType() { return myType; }
    char getColor() { return myColor; }
    char getMovePattern() const {return myMove_pattern;}
    char getEatPattern() const {return myEat_pattern;}
    char getMaxSquares() const {return myMax_squares;}
    bool isMoveable() { return myMoveable; }
    void setMoveable(bool moveable) { myMoveable = moveable; }
    void setEatMe(bool eatMe) { myEat_me = eatMe; }
    bool canEat() { return myEat_them; }
    void setEat(bool eat_them) { myEat_them = eat_them; }
    bool canEatMe() { return myEat_me; }
    char getMyRowPosit() const { return myRowPosit; }
    void setMyRowPosit(char myRowPosit) { myRowPosit = myRowPosit; }
    char getMyColPosit() const { return myColPosit; }
    void setMyColPosit(char myColPosit) { myColPosit = myColPosit; }
    bool isPlaying() const { return myPlaying; }
    void setOut() { myPlaying = false; }
};