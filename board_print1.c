#include "board.h"

int main()
{

    int i, j;
    board *a = (board *)malloc(sizeof(board) * 8 * 8);

    a->array[0] = 'r';
    a->array[1] = 'h';
    a->array[2] = 'b';
    a->array[3] = 'k';
    a->array[4] = 'q';
    a->array[5] = 'b';
    a->array[6] = 'h';
    a->array[7] = 'r';

    for (j = 0; j <= 7; j++){
        a->array[8 + j] = 'p';
    }
    for (i = 2; i <=5; i++ ){
        for (j = 0; j <= 7; j++){
            a->array[i * 8 + j] = '_';
        }
    }
    for (j = 0; j <= 7; j++){
        a->array[6 * 8 + j] = 'P';
    }

    a->array[56] = 'R';
    a->array[57] = 'H';
    a->array[58] = 'B';
    a->array[59] = 'Q';
    a->array[60] = 'K';
    a->array[61] = 'B';
    a->array[62] = 'H';
    a->array[63] = 'R';

    printf("   A B C D E F G H\n");
    printf("   _ _ _ _ _ _ _ _\n");
    for (i = 0; i <= 7; i++){
        printf("%d ", i + 1);
        for (j = 0; j <= 7; j++){
        printf("|%c", a->array[i * 8 + j]);
        }
        if (j = 7){
            printf("|\n");
        }
    }
}
