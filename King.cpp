//
// Created by kb on 12/19/20.
//
#import "Piece.cpp"
class King : public Piece{

private:
    bool checkmate;
    bool castle;
public:
    King(char color) : Piece('K', color, 'A', 'A', '1' ){
        myMoveable = false;
        myEat_them = false;
        myEat_me = false;
        myPlaying = true;
        if (color == 'W') {
            myColPosit = 'E';
            myRowPosit = '1';
        } else if (color == 'B') {
            myColPosit = 'E';
            myRowPosit = '8';
        }
        checkmate = false;
        castle = false;
    }

    bool isCheck() const {
        return myEat_me;
    }

    bool isCheckmate() {
        return checkmate;
    }

    void setCheckmate() {
        checkmate = true;
    }

};