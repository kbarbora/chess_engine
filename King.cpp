//
// Created by kb on 12/19/20.
//
#import <string>
#import "Piece.cpp"
using namespace std;

class King : public Piece{
private:
    bool checkmate;
    bool castle;
public:
    King(char color) : Piece('K', color, 'A', 'A', 1 ){
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

    string getPosition(){
        string position(1, myColPosit+myRowPosit);
        return position;
    }

    bool isCheck() const {return myEat_me;}

    bool isCheckmate() {return checkmate;}

    void setCheckmate() {checkmate = true;}

    bool isCastle() const {return castle;}

    void setCastle(bool castle) {castle = castle;}

    bool move(){

    }

};