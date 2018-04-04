#include "board.h"

void coordinates(board *a){
    int k;
    int j, j1;
    char i, i1;
    char mass[] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H'};

    scanf("%c%d %c%d", &i, &j, &i1, &j1);

    for (k = 0; k <= 7; k++){
        if (i == mass[k]){
            i = k;
        }
        if (i1 == mass[k]){
            i1 = k;
        }
        if (j == k + 1){
            j = k;
        }
        if (j1 == k + 1){
            j1 = k;
        }
    }
    swap(a, i, j, i1, j1);
    /*tmp = a->array[j * 8 + i];
    a->array[j * 8 + 1] = a->array[j1 * 8 + i1];
    a->array[j1 * 8 + i1] = tmp;*/
}
