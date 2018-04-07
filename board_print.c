#include "board.h"

void print_board(board *a){
    int i, j;

    printf("   A B C D E F G H\n");
        printf("   _ _ _ _ _ _ _ _\n");
        for (j = 0; j <= 7; j++){
            printf("%d ", j + 1);
            for (i = 0; i <= 7; i++){
                printf("|%c", a->array[j * 8 + i]);
            }
            printf("|\n");
        }
}

