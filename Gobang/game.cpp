


/****��Ҫ�޸Ĵ��ļ�����****/



#include "game.h"
#include "board.h"
#ifdef GAME_H
#ifdef BOARD_H

/*�������ݽṹBoard*/
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
	/*��ȡ����״̬*/
	int stat=board->drop_piece(x, y);
	print_board();
	if (stat == MULTI_DROP_ERR){
		cerr << "�ظ����ӣ����������룡" << endl;
		stat = 0;
	}
	else if (stat == OUT_RANGE_ERR){
		cerr << "���ӳ��磬���������룡" << endl;
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