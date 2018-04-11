#include "board.h"

int coordinates(board *a){
    int k, g = 0;
    int j, j1;
    char i, i1;
    char mass[] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H'};

    scanf("%c%d %c%d", &i, &j, &i1, &j1);

    for (k = 0; k <= 7; k++){
        if (i == mass[k]){
            i = k;
            g++;
        }
        if (i1 == mass[k]){
            i1 = k;
            g++;
        }
        if (j == k + 1){
            j = k;
            g++;
        }
        if (j1 == k + 1){
            j1 = k;
            g++;
        }
    }
    if (g == 4){
        swap(a, i, j, i1, j1);
        return 0;
    }
    else
        return -1;
}
