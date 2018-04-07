#include <stdio.h>
#include <string.h>
#include "board.h"

int main ()
{
    board *a = (board *)malloc(sizeof(board) * 8 * 8);
    a->array[64] = {
        {'r', 'h', 'b', 'k', 'q', 'b', 'h', 'r'},
        {'p', 'p', 'p', 'p', 'p', 'p', 'p', 'p'},
        {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
        {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
        {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
        {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
        {'P', 'P', 'P', 'P', 'P', 'P', 'P', 'P'},
        {'R', 'H', 'B', 'Q', 'K', 'B', 'H', 'R'},
    };
    int i, j;

    for (i = 0; i < 8; i++){
        for (j = 0; j < 8; j++){
            printf("%c", a->array[i * 8 + j]);
        }
        printf("\n");
    }
    return 0;
}
