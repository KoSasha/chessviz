#ifndef BOARD_H
#define BOARD_H

#include <stdio.h>
#include <stdlib.h>

typedef struct {
    char array[8];
    char type;
    int color;
}board;

void initial_board(board *a);

void print_board(board *a);

int coordinates(board *a, char i, int j, char i1, int j1);

void swap(board *a, char i, int j, char i1, int j1);

#endif
