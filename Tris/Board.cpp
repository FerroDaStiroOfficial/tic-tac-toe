#include "Board.h"
#include "Player.h"

void Board::DrawBoard()
{
	system("cls");

	std::cout << " " << a[0][0] << " |" << " " << a[0][1] << " |" << " " << a[0][2] << "\n";
	std::cout << "___|___|___ \n";
	std::cout << " " << a[1][0] << " |" << " " << a[1][1] << " |" << " " << a[1][2] << "\n";
	std::cout << "___|___|___ \n";
	std::cout << " " << a[2][0] << " |" << " " << a[2][1] << " |" << " " << a[2][2] << "\n";
	std::cout << "   |   |   " << "\n";
}

void Board::CheckWin()
{
	if (
		a[0][0] && a[0][2] == a[0][1] ||
		a[1][0] && a[1][2] == a[1][1] ||
		a[2][0] && a[2][1] == a[2][2] ||
		
	
		a[0][0] && a[1][0] == a[2][0] ||
		a[0][1] && a[1][1] == a[2][1] ||
		a[0][2] && a[1][2] == a[2][2] ||
								
													 															
		a[1][1] && a[2][2] == a[0][0] ||
		a[1][1] && a[0][2] == a[2][0]
		)
	{
		win = true;
	}
}
 
void Board::CheckBox()
{
	if (c == '1')
	{
		a[0][0] = s;
	}
	else if (c == '2')
	{
		a[0][1] = s;
	}
	else if (c == '3')
	{
		a[0][2] = s;
	}
	else if (c == '4')
	{
		a[1][0] = s;
	}
	else if (c == '5')
	{
		a[1][1] = s;
	}
	else if (c == '6')
	{
		a[1][2] = s;
	}
	else if (c == '7')
	{
		a[2][0] = s;
	}
	else if (c == '8')
	{
		a[2][1] = s;
	}
	else if (c == '9')
	{
		a[2][2] = s;
	}
}

Player::Player(char s)
{
	segno = s;
}