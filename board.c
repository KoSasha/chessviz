#include "board.h"

int coordinates(board *a, char i, int j, char i1, int j1) {
    int k, g = 0;
    char mass[] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H'};

    for (k = 0; k <= 7; k++) {
        if (i == mass[k]) {
            i = k;
            g++;
        }
        if (i1 == mass[k]) {
            i1 = k;
            g++;
        }
        if (j == k + 1) {
            j = k;
            g++;
        }
        if (j1 == k + 1) {
            j1 = k;
            g++;
        }
    }
    if (g == 4) {
        swap(a, i, j, i1, j1);
        return 0;
    }
    else {
        return -1;
    }
    return 0;
}

void swap(board *a, char i, int j, char i1, int j1){
    int tmp;
    tmp = a->array[j * 8 + i];
    a->array[j * 8 + i] = a->array[j1 * 8 + i1];
    a->array[j1 * 8 + i1] = tmp;
}
