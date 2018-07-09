
#include "board.h"

#ifdef BOARD_H
Board::Board()
{
	this->current_player = BLACK;
	for (int i = 0; i < BORDER_SIZE; i++){
		for (int j = 0; j < BORDER_SIZE; j++){
			this->board[i][j] = BLANK;
		}
	}
}

void Board::print_board()
{
	/*����*/
	system("cls");
	//TODO:�ڿ���̨�ϴ�ӡ����
	cout << "   ";
	for (int i = 0; i < 19; i++) {
		cout << " " <<setw(2)<< i + 1 << " ";
	}
	cout << '\n';
	for (int i = 0; i < 19; i++) {
		cout <<setw(3)<< i + 1 << "|";
		for (int j = 0; j < 19; j++){
			switch (this->board[i][j])
			{
			case BLACK:
				cout << " " << "X" << " |";
				break;
			case WHITE:
				cout << " " << "O" << " |";
				break;
			default:
				cout << " " << " " << " |";
				break;
			}
		
		}
		cout << '\n';
		cout << '\n';
	}
	

}

int Board::drop_piece(int x, int y)
{
	//�ж�����
	if (x < 0 || y < 0 || x >= BORDER_SIZE || y >= BORDER_SIZE){
		return OUT_RANGE_ERR;
	}
	//�ж��ظ�����
	if (this->board[y][x] != BLANK){
		return MULTI_DROP_ERR;
	}
	this->board[y][x] = this->current_player;
	int length1 = 1;//���ϵ�����
	for (int i = 1; board[y - i][x - i] == this->current_player; i++) {
		length1++;
	}
	for (int i = 1; board[y + i][x + i] == this->current_player; i++) {
		length1++;
	}
	int length2 = 1;//���µ�����
	for (int i = 1; board[y + i][x - i] == this->current_player; i++) {
		length2++;
	}
	for (int i = 1; board[y - i][x + i] == this->current_player; i++) {
		length2++;
	}
	int length3 = 1;//����
	for (int i = 1; board[y - i][x] == this->current_player; i++) {
		length3++;
	}
	for (int i = 1; board[y + i][x] == this->current_player; i++) {
		length3++;
	}
	int length4 = 1;//�ϵ���
	for (int i = 1; board[y][x + i] == this->current_player; i++) {
		length4++;
	}
	for (int i = 1; board[y][x - i] == this->current_player; i++) {
		length4++;
	}
	if (length1 >= 5 || length2 >= 5 || length3 >= 5 || length4 >= 5)
		return this->current_player;
	else {
		if (this->current_player == BLACK)
			this->current_player = WHITE;
		else
			this->current_player = BLACK;
		return 0;
	}
	//TODO���ж��Ƿ��������ӣ��ɹ��򷵻ص�ǰ��ұ�ţ����򷵻�0���л���ǰ���

}

#endif