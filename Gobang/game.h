


/****��Ҫ�޸Ĵ��ļ�����****/



/*game.h*/
#define GAME_H
#include <iostream>
using namespace std;

/*��ʼһ���µ���Ϸ*/
void create_board();
/*��������ӡ�µ�����*/
void print_board();
/*
��ǰ������Ӳ��л����
param:x,y����ֵ
return:����ɹ��������ӷ�����ұ�ţ����򷵻�0
*/
int drop_piece(int x, int y);

/*��������*/
void release_board();