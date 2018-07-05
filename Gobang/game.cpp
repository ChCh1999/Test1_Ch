


/****不要修改此文件代码****/



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
	/*获取落子状态*/
	int stat=board->drop_piece(x, y);
	print_board();
	if (stat == MULTI_DROP_ERR){
		cerr << "重复落子，请重新输入！" << endl;
		stat = 0;
	}
	else if (stat == OUT_RANGE_ERR){
		cerr << "落子出界，请重新输入！" << endl;
		stat = 0;
	}
	return stat;
}
void release_board()
{
	delete board;
	board = NULL;
}
#endif
#endif