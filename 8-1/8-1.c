#include <stdio.h>
#include <windows.h>
#include <time.h>

void gotoxy(short x, short y) {

	COORD pos = { x, y };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}

void CursorView(char show)
{
	CONSOLE_CURSOR_INFO ConsoleCursor;
	ConsoleCursor.bVisible = show;		// 커서를 보일지 말지 결정(0: 안보임, 0 이외: 보임)
	ConsoleCursor.dwSize = 1;					//커서의 크기를 결정(1~100 사이만 가능)
	SetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE), &ConsoleCursor);
}

int main(void) {
	printf("Enter 입력 시 시작 : "); getchar();
	CursorView(0);
	srand((unsigned int)time(NULL));
	while (1) {
		gotoxy((rand() % 300) / 2, rand() % 25);
		printf("*");
		Sleep(100);
	}
}