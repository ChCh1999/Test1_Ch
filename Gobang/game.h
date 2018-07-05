


/****不要修改此文件代码****/



/*game.h*/
#define GAME_H
#include <iostream>
using namespace std;

/*开始一个新的游戏*/
void create_board();
/*清屏并打印新的棋盘*/
void print_board();
/*
当前玩家落子并切换玩家
param:x,y坐标值
return:如果成功连成五子返回玩家编号，否则返回0
*/
int drop_piece(int x, int y);

/*销毁棋盘*/
void release_board();