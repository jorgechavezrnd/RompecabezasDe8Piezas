#include <stdio.h>
#include "puzzle.h"

int main()
{
    Puzzle p;

    p.puzzle[0][0] = 4; p.puzzle[0][1] = 1; p.puzzle[0][2] = 3;
    p.puzzle[1][0] = 6; p.puzzle[1][1] = 2; p.puzzle[1][2] = 5;
    p.puzzle[2][0] = 7; p.puzzle[2][1] = 0; p.puzzle[2][2] = 8;

    p.final_state[0][0] = 1; p.final_state[0][1] = 2; p.final_state[0][2] = 3;
    p.final_state[1][0] = 4; p.final_state[1][1] = 0; p.final_state[1][2] = 5;
    p.final_state[2][0] = 6; p.final_state[2][1] = 7; p.final_state[2][2] = 8;

    puzzle_initialize(&p);
    printf("Puzzle:\n");
    puzzle_show(&p);
    printf("Initial state:\n");
    puzzle_show_initial_state(&p);
    printf("Final State:\n");
    puzzle_show_final_state(&p);
    printf("Move up:\n");
    puzzle_move_up(&p);
    puzzle_show(&p);
    printf("Move left:\n");
    puzzle_move_left(&p);
    puzzle_show(&p);
    printf("Move down:\n");
    puzzle_move_down(&p);
    puzzle_show(&p);
    printf("Move right:\n");
    puzzle_move_right(&p);
    puzzle_show(&p);
    printf("\n\n");

    printf("Puzzle:\n");
    puzzle_show(&p);
    printf("Initial state:\n");
    puzzle_show_initial_state(&p);
    printf("Final State:\n");
    puzzle_show_final_state(&p);

    return 0;
}
