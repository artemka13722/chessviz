#include <stdio.h>

char *board[8][8];
char pawn = 'p';
char rook = 'r';
char night = 'n';
char bishop = 'b';
char queen = 'q';
char king = 'k';
char block = ' ';

void initBoard(){
    for (int i = 0; i < 8; i++){
    for (int j = 0; j < 8; j++){
        if (i == 1 || i == 6 ) {
            board[i][j] = &pawn;
        }
        else if (i != 7 || 1 != 0 || i != 1 || i != 6)
        {
            board[i][j] = &block;
        }
    }
}
board[7][0] = &rook;
board[7][1] = &night;
board[7][2] = &bishop;
board[7][3] = &queen;
board[7][4] = &king;
board[7][5] = &bishop;
board[7][6] = &night;
board[7][7] = &rook;

board[0][0] = &rook;
board[0][1] = &night;
board[0][2] = &bishop;
board[0][3] = &queen;
board[0][4] = &king;
board[0][5] = &bishop;
board[0][6] = &night;
board[0][7] = &rook;
}

void printBoard(){
    printf("************************\n");
    for (int r = 0; r < 8; r++){
        for (int c = 0; c < 8; c++){
            printf("[%c]", *(board[r][c]));
        }
        printf("\n");
    }
    printf("************************\n");
}

void movePawn(int r, int c, int tor, int toc){
        board[tor][toc] = board[r][c];
        board[r][c] = &block;
}