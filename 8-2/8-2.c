#include<stdio.h>
#include<Windows.h>
#include<conio.h>
#define LEFT 75
#define RIGHT 77
#define UP 72
#define DOWN 80
#define ARROW 224

void GotoXY(int x, int y) {				//화면의 원하는 x, y좌표로 보냄
	COORD Pos;
	Pos.X = x;
	Pos.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Pos);
}

void CursorView(char show) {
	CONSOLE_CURSOR_INFO ConsoleCursor;
	ConsoleCursor.bVisible = show;	//커서를 보일지 말지 결정(0: 안보임, 0 이외: 보임)
	ConsoleCursor.dwSize = 1;			//커서의 크기를 결정(1~100 사이만 가능)
	SetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE), &ConsoleCursor);
}

void setcolor(unsigned short text, unsigned short back) {
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), text | (back << 4));
}

int x = 30, y = 7;
void main(void) {
	CursorView(0); GotoXY(x, y); setcolor(6, 0); printf("★");
	while (1) {
		if (_kbhit()) {
			int nkey = _getch();
			if (nkey == ARROW) {
				nkey = _getch();
				switch (nkey) {
				case UP:
					system("cls"); GotoXY(x, --y); printf("★"); break;
				case LEFT:
					system("cls"); GotoXY(x = x - 2, y); printf("★"); break;
				case RIGHT:
					system("cls"); GotoXY(x = x + 2, y); printf("★"); break;
				case DOWN:
					system("cls"); GotoXY(x, ++y); printf("★"); break;
				}
			}
		}
	}
}
