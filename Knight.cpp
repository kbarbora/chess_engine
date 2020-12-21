//
// Created by kb on 12/20/20.
//
#import <string>
#import "Piece.cpp"
using namespace std;

class Knight : public Piece{
private:
    bool promoted;
public:
    Knight(char color) : Piece('N', color, 'L', 'L', 3){
        myMoveable = true;
        myEat_them = false;
        myEat_me = false;
        myPlaying = true;
        promoted = false;
    }

    string getPosition(){
        string position(1, myColPosit+myRowPosit);
        return position;
    }

    void setInitialPosition(char row, char col){
        myColPosit = col;
        myRowPosit = row;
    }

    bool isPromoted(){return promoted;}

    void setPromoted(){promoted = true;}

    bool isPlaying(){return myPlaying;}

    void dead(){myPlaying = false;}

    bool move(){

    }
};

