#include "game.h"
#include "board.h"
#ifdef GAME_H
#ifdef BOARD_H

/*辅助数据结构Board*/
static Board* board;

void create_board()
{
	board = new Board();
}
void print_board()
{
	board->print_board();
}
int drop_piece(int x, int y)
{
	return board->drop_piece(x, y);
}
#endif
#endif