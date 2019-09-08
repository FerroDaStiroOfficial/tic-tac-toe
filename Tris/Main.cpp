#include <iostream>
#include "Board.cpp"
#include "Player.cpp"

Player g1('X');
Player g2('O');
Board b;
 
int main()
{ 
	while (!b.win)
	{
		b.DrawBoard();
		std::cout << "turno giocatore 1: ";
		std::cin >> b.c;
		b.s = g1.segno;
		b.CheckBox();
		b.DrawBoard();
		b.CheckWin();
		if (b.win)
		{
			std::cout << "giocatore 1 ha vinto!";
			break;
		}
		b.DrawBoard();
		std::cout << "turno giocatore 2: ";
		std::cin >> b.c;
		b.s = g2.segno;
		b.CheckBox();
		b.DrawBoard();
		b.CheckWin();
		if (b.win)
		{
			std::cout << "giocatore 2 ha vinto!";
		}
	}
} 