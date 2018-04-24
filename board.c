#include "board.h"

int coordinates(board *a, char i, int j, char i1, int j1) {
    int g = 0;
    char mass[] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H'};

    for (int k = 0; k <= 7; k++) {
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

    if (g != 4) {
        printf("Ошибка ввода данных\n");
    }
    return 0;
}

void move(board *a, char i, int j, char i1, int j1){
    board tmp;

    if (a[j1*8 + i1].type == '_') {
    tmp = a[j * 8 + i];
    a[j * 8 + i] = a[j1 * 8 + i1];
    a[j1 * 8 + i1] = tmp;
    }
    else {
        a[j1*8 + i1] = a[j*8 + i];
            a[j*8 + i].type = '_';
            a[j*8 + i].colour = 2;
    }
}

int colour_checking(board * a, int str, int stl, int colour){
		if(a[str*8 + stl].colour == colour) {
			return 1;
        }
		return 0;
}

int win_checking(board * a){
    int flag = 0;
    for (int i = 0; i <= 7; i++) {
        for (int j = 0; j <=7; j++) {
            if (a[i*8 + j].type == 'k' || a[i*8 + j].type == 'K') {
                flag++;
            }
        }
    }
    if(flag == 2) {
        return 0;
    }
    return 1;
}

