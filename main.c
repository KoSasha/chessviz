#include "board.h"

int main()
{
    board *a = (board *)malloc(sizeof(board) * 8 * 8);

    printf("Введите входные данные в формате вида: E2 E4\n");
    initial_board(a);
    print_board(a);
    coordinates(a);
    print_board(a);
}
