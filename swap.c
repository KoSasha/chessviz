#include "board.h"

void swap(board *a, char i, int j, char i1, int j1){
    int tmp;
    tmp = a->array[j * 8 + i];
    a->array[j * 8 + i] = a->array[j1 * 8 + i1];
    a->array[j1 * 8 + i1] = tmp;
}
