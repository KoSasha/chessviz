
 check_move = move_checking(a, i, j, i1, j1);
                    if (check_move == 0) {
                        printf("Ход не возможен\n");
                    }
                    if ((check_move == 1 && colour == 0) || (check_move == 0 && colour == 1)) {
                        check_move = 0;
                        colour = 0;
                    }