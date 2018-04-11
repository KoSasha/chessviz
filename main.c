#include "board.h"

int main()
{
    int f, moves, i;
    printf("Введите количество ходов:");
    scanf("%d", &moves);

    board *a = (board *)malloc(sizeof(board) * 8 * 8);

    printf("Введите входные данные в формате вида: E2 E4\n");
    initial_board(a);
    print_board(a);
    for (i = 0; i <= moves; i++){
        f = coordinates(a);
        if (f == 0){
            print_board(a);
        }
        else
            printf("Ошибка\n");
    }
}
