#include "board.h"

int main()
{
    int f, moves, k;
    int j, j1;
    char i, i1;

    printf("Введите количество ходов:");
    scanf("%d", &moves);

    board *a = (board *)malloc(sizeof(board) * 8 * 8);

    printf("Введите входные данные в формате вида: E2 E4\n");
    initial_board(a);
    print_board(a);
    for (k = 0; k <= moves; k++){
	scanf("%c%d %c%d", &i, &j, &i1, &j1);
        f = coordinates(a, i, j, i1, j1);
        if (f == 0){
            print_board(a);
        }
        else
            printf("Ошибка\n");
    }
    return 0;
}
