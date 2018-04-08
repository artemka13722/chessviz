#include "moves.h"

int main(){
    initBoard();
    printBoard();

    char hod[5];
    scanf("%s", hod);
    int per1 = hod[0] - 97;
    int per3 = hod[1] - 48;
    int per4 = hod[4] - 48;
    movePawn(per3, per1, per4, per1);
    printBoard();

    return 0;
}