//
// Created by kb on 12/20/20.
//
#import <string>
#import "Piece.cpp"
using namespace std;

class Queen : public Piece{
private:
    bool promoted;
public:
    Queen(char color) : Piece('Q', color, 'A', 'A', '0'){
        myMoveable = false;
        myEat_them = false;
        myEat_me = false;
        myPlaying = true;
        if (color == 'W') {
            myColPosit = 'D';
            myRowPosit = '1';
        } else if (color == 'B') {
            myColPosit = 'D';
            myRowPosit = '8';
        }
    }
    string getPosition(){
        string position(1, myColPosit+myRowPosit);
        return position;
    }
};

