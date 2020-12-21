//
// Created by kb on 12/19/20.
//

#ifndef CHESS_ENGINE_KING_H
#define CHESS_ENGINE_KING_H


#include "Piece.h"

class King {
private:
   bool checkmate;
   bool castle;
public:
    King(char color);
    ~King();

    bool isCheck() const;
    void setCheck(bool check);
    bool isCheckmate();
    void setCheckmate();
};


#endif //CHESS_ENGINE_KING_H
