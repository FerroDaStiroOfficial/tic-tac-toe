#pragma once
class Board
{
private:
	char a[3][3] = { '1','2','3','4','5','6','7','8','9' };
public:
	char c;
	char s;
	bool win = false;
	void DrawBoard();
	void CheckWin();
	void CheckBox();
};