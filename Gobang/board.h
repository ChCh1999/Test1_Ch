/*board.h*/
#define BOARD_H
#include<iomanip>
#include <iostream>
using namespace std;

/*�հױ��*/
#define BLANK 0
/*���ӱ��*/
#define BLACK 1
/*���ӱ��*/
#define WHITE 2
/*���̴�С*/
#define BORDER_SIZE 19
/*�߽���ʾ��*/
#define BORDER_CHAR "- "
/*�հ���ʾ��*/
#define BLANK_CHAR "  "
/*������ʾ��*/
#define BLACK_CHAR "X "
/*������ʾ��*/
#define WHITE_CHAR "O "

/*ͬһ�������Ӷ��*/
#define MULTI_DROP_ERR -1
/*���ӳ���*/
#define OUT_RANGE_ERR -2

class Board{
public:
	/*��ǰ���*/
	int current_player;
	/*����*/
	int board[BORDER_SIZE][BORDER_SIZE];
	Board();
	/*��������ӡ�µ�����*/
	void print_board();
	/*
	��ǰ������Ӳ��л����
	param:x,y����ֵ
	return:����ɹ��������ӷ�����ұ�ţ�û�����������򷵻�0�������ش�����
	*/
	int drop_piece(int x, int y);

};
