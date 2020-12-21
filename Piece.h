//
// Created by kb on 12/19/20.
//

#ifndef CHESS_ENGINE_PIECE_H
#define CHESS_ENGINE_PIECE_H


class Piece {
protected:
    char myType;
    char myColor;
    bool myMoveable;
    bool myEat_them;
    bool myEat_me;
    char myRowPosit;
    char myColPosit;
    bool myPlaying;
    char move_pattern;
    char eat_pattern;
    int max_squares;
//    char *myEaten;

public:
    Piece();
    ~Piece();

    char getType();
    char getColor();
    bool isMoveable();
    void setMoveable( bool moveable);
    bool canEat();
    void setEat(bool eatIt);
    bool canEatMe();
    void setEatMe(bool eatMe);
    char getMyRowPosit() const;
    void setMyRowPosit(char myRowPosit);
    char getMyColPosit() const;
    void setMyColPosit(char myColPosit);
    bool isPlaying() const;
    void setOut();
};


#endif //CHESS_ENGINE_PIECE_H
