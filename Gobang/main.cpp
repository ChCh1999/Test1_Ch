


/****��Ҫ�޸Ĵ��ļ�����****/




#include "game.h"
#ifdef GAME_H

void main(){
	int x, y;
	x = y = 0;
	do{
		create_board();
		print_board();
		do{
			/*��������1-19���ַ����س�����Ϊ����*/
			cout << "������x���꣺";
			cin >> x;
			cout << "������y���꣺";
			cin >> y;
			cout << endl;
			x -= 1;
			y -= 1;
		} while (drop_piece(x, y) == 0);
		release_board();
		cout << "��������0�˳��������������ʼһ������Ϸ��" << endl;
		cin >> x;
	} while (x != 0);
}

#endif