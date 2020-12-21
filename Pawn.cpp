//
// Created by kb on 12/20/20.
//
#import <string>
#import "Piece.cpp"
using namespace std;

class Pawn : public Piece{
public:
    Pawn(char color) : Piece('P', color, 'N', 'D', 1){
        myMoveable = true;
        myEat_them = false;
        myEat_me = false;
        myPlaying = true;
    }

    string getPosition(){
        string position(1, myColPosit+myRowPosit);
        return position;
    }

    void setInitialPosition(char row, char col){
        myColPosit = col;
        myRowPosit = row;
    }

    bool isPlaying(){return myPlaying;}

    void dead(){myPlaying = false;}

    bool move(){

    }
};

