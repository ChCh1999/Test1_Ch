/*board.h*/
#define BOARD_H
#include<iomanip>
#include <iostream>
using namespace std;

/*空白标记*/
#define BLANK 0
/*黑子标记*/
#define BLACK 1
/*白子标记*/
#define WHITE 2
/*棋盘大小*/
#define BORDER_SIZE 19
/*边界显示符*/
#define BORDER_CHAR "- "
/*空白显示符*/
#define BLANK_CHAR "  "
/*黑子显示符*/
#define BLACK_CHAR "X "
/*白子显示符*/
#define WHITE_CHAR "O "

/*同一个点落子多次*/
#define MULTI_DROP_ERR -1
/*落子出界*/
#define OUT_RANGE_ERR -2

class Board{
public:
	/*当前玩家*/
	int current_player;
	/*棋盘*/
	int board[BORDER_SIZE][BORDER_SIZE];
	Board();
	/*清屏并打印新的棋盘*/
	void print_board();
	/*
	当前玩家落子并切换玩家
	param:x,y坐标值
	return:如果成功连成五子返回玩家编号，没有连成五子则返回0，出错返回错误码
	*/
	int drop_piece(int x, int y);

};
