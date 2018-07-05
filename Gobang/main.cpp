


/****不要修改此文件代码****/




#include "game.h"
#ifdef GAME_H

void main(){
	int x, y;
	x = y = 0;
	do{
		create_board();
		print_board();
		do{
			/*输入两个1-19的字符并回车，视为落子*/
			cout << "请输入x坐标：";
			cin >> x;
			cout << "请输入y坐标：";
			cin >> y;
			cout << endl;
			x -= 1;
			y -= 1;
		} while (drop_piece(x, y) == 0);
		release_board();
		cout << "您可输入0退出或输入任意键开始一个新游戏。" << endl;
		cin >> x;
	} while (x != 0);
}

#endif