#ifndef PUZZLE_H
#define PUZZLE_H

typedef struct Puzzle Puzzle;

struct Puzzle
{
    int puzzle[3][3];
    int initial_state[3][3];
    int final_state[3][3];
    int empty_box_row;
    int empty_box_column;
};

void puzzle_initialize(Puzzle * puzzle);
void puzzle_show(Puzzle * puzzle);
void puzzle_show_initial_state(Puzzle * puzzle);
void puzzle_show_final_state(Puzzle * puzzle);

void puzzle_move_up(Puzzle * puzzle);
void puzzle_move_left(Puzzle * puzzle);
void puzzle_move_down(Puzzle * puzzle);
void puzzle_move_right(Puzzle * puzzle);

#endif // PUZZLE_H
