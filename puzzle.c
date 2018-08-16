#include "puzzle.h"
#include "stdio.h"

void puzzle_initialize(Puzzle *puzzle)
{
    for (int i = 0; i < 3; ++i)
    {
        for (int j = 0; j < 3; j++)
        {
            if (puzzle->puzzle[i][j] == 0)
            {
                puzzle->empty_box_row = i;
                puzzle->empty_box_column = j;
            }
            puzzle->initial_state[i][j] = puzzle->puzzle[i][j];
        }
    }
}

void puzzle_show(Puzzle *puzzle)
{
    for (int i = 0; i < 3; ++i)
    {
        for (int j = 0; j < 3; ++j)
        {
            printf("%i\t", puzzle->puzzle[i][j]);
        }
        printf("\n");
    }
}

void puzzle_show_initial_state(Puzzle * puzzle)
{
    for (int i = 0; i < 3; ++i)
    {
        for (int j = 0; j < 3; ++j)
        {
            printf("%i\t", puzzle->initial_state[i][j]);
        }
        printf("\n");
    }
}

void puzzle_show_final_state(Puzzle * puzzle)
{
    for (int i = 0; i < 3; ++i)
    {
        for (int j = 0; j < 3; ++j)
        {
            printf("%i\t", puzzle->final_state[i][j]);
        }
        printf("\n");
    }
}

void puzzle_move_up(Puzzle *puzzle)
{
    --puzzle->empty_box_row;
    puzzle->puzzle[puzzle->empty_box_row + 1][puzzle->empty_box_column] = puzzle->puzzle[puzzle->empty_box_row][puzzle->empty_box_column];
    puzzle->puzzle[puzzle->empty_box_row][puzzle->empty_box_column] = 0;
}

void puzzle_move_left(Puzzle *puzzle)
{
    --puzzle->empty_box_column;
    puzzle->puzzle[puzzle->empty_box_row][puzzle->empty_box_column + 1] = puzzle->puzzle[puzzle->empty_box_row][puzzle->empty_box_column];
    puzzle->puzzle[puzzle->empty_box_row][puzzle->empty_box_column] = 0;
}

void puzzle_move_down(Puzzle *puzzle)
{
    ++puzzle->empty_box_row;
    puzzle->puzzle[puzzle->empty_box_row - 1][puzzle->empty_box_column] = puzzle->puzzle[puzzle->empty_box_row][puzzle->empty_box_column];
    puzzle->puzzle[puzzle->empty_box_row][puzzle->empty_box_column] = 0;
}

void puzzle_move_right(Puzzle *puzzle)
{
    ++puzzle->empty_box_column;
    puzzle->puzzle[puzzle->empty_box_row][puzzle->empty_box_column - 1] = puzzle->puzzle[puzzle->empty_box_row][puzzle->empty_box_column];
    puzzle->puzzle[puzzle->empty_box_row][puzzle->empty_box_column] = 0;
}
