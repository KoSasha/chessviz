#include "board.h"

int main()
{
    char i, i1;
    int f, j, j1;
    int win = 0, count = 0, colour = 0, check_move;
    
    board *a = (board *)malloc(sizeof(board) * 8 * 8);

    printf("Введите входные данные в формате вида: E2 E4\n");
    initial_board(a);
    print_board(a);
    while (win == 0) {
        while (colour == 0) {
            while (check_move == 0 && colour == 0) {
                if (count % 2 == 0) {
                        printf ("Ход белых фигур:");
                }
                else
                    printf("Ход чёрных фигур:");
                f = 1;
                while (f != 0) {
                    scanf("%c%d %c%d", &i, &j, &i1, &j1);
                    while(getchar() != '\n');
                    f = coordinates(a, i, j, i1, j1);
                }
                f = 1;
                colour = colour_checking(a, i, j, count % 2);
                check_move = move_checking(a, i, j, i1, j1);
                if (check_move == 0) {
                    printf("Ход не возможен\n");
                }
                if ((check_move == 1 && colour == 0) || (check_move == 0 && colour == 1)) {
                    check_move = 0;
                    colour = 0;
                }
            }
        }
        if (check_move == 1) {
	        move(a, i, j, i1, j1);
        }
	print_board(a);
	count++;
    check_move = 0;
	colour = 0;
	win = win_checking(a);	
	}
	free(a);
    return 0;
}