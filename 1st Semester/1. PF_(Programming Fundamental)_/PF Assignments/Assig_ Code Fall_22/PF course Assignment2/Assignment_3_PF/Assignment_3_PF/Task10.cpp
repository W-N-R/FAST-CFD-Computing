#include<iostream>
#include<cstdlib>
#include<iomanip>
#include<conio.h>
#include<ctime>;
int main()
{
	int filledcounter=0;
	char b1 = '1', b2 = '2', b3 = '3', b4 = '4', b5 = '5', b6 = '6', b7 = '7', b8 = '8', b9 = '9';
	char keypress;
	int playerturn;
	bool toss,flag=true;

	std::cout << std::setw(1500) << "MAIN MENU" << std::endl;
	std::cout << std::setw(65) << "TIC-TAC-TOE" << std::endl;
	std::cout << std::endl;

	std::cout << std::setw(65) << "CREDITS : CREATED BY MUHAMMAD QASIM NAVEED" << std::endl;
	std::cout << std::setw(65) << "INSTRUCTIONS : " << std::endl;
	std::cout << std::setw(65) << "\t\t\t1_win by entering same symbols in a row (up, down, across, or diagonally) " << std::endl;
	std::cout << std::setw(65) << "\t\t\t2_When all 9 squares are full, the game is over " << std::endl;
	std::cout << std::setw(65) << "\t\t\t If no player has 3 marks in a row, the game ends in a tie." << std::endl;

	std::cout << std::setw(65) << "PLAY GAME" << std::endl;
	std::cout << std::setw(65) << "PLAYER VS PLAYER" << std::endl;

	std::cout << std::endl;

	std::cout << " Press Enter button to continue !" << std::endl;

	_getch();
	system("CLS");
	std::cout << "-------------------------------------------------------------------------------------------" << std::endl;
	srand(time(0));
	toss = rand() % 2;
	if (toss == 0)
	{
		playerturn = 1;
		while (1)
		{
			system("CLS");
			
			std::cout << "\n\n\n\n\n\n\n\n" << std::endl;
			std::cout << "                                        |         |" << std::endl;
			std::cout << "\t\t\t\t___" << b1 << "____|____" << b2 << "____|____" << b3 << "___  " << std::endl;
			std::cout << "                                        |         |" << std::endl;
			std::cout << "\t\t\t\t___" << b4 << "____|____" << b5 << "____|____" << b6 << "___  " << std::endl;
			std::cout << "                                        |         |" << std::endl;
			std::cout << "\t\t\t\t___" << b7 << "____|____" << b8 << "____|____" << b9 << "___  " << std::endl;
			std::cout << "                                        |         |" << std::endl;


			if ((b1 == b2 && b2 == b3 ) || (b4 == b5 && b5 == b6) || (b7 == b8 && b8 == b9))
			{
				if (playerturn == 1)
				{
					playerturn = 2;
					std::cout << "Congrats ! ................Player " << playerturn << " wins...............!!";
					flag = false;
					break;
				}
				else
				{
					playerturn = 1;
					std::cout << "Congrats ! ................Player " << playerturn << " wins...............!!";
					flag = false;
					break;
				}

			}
			if ((b1 == b4 && b4 == b7) || (b2 == b5 && b5 == b8) || (b3 == b6 && b6 == b9))
			{
				if (playerturn == 1)
				{
					playerturn = 2;
					std::cout << "Congrats ! ................Player " << playerturn << " wins...............!!";
					flag = false;
					break;
				}
				else
				{
					playerturn = 1;
					std::cout << "Congrats ! ................Player " << playerturn << " wins...............!!";
					flag = false;
					break;
				}

			}

			if ((b1 == b5 && b5 == b9) || (b3 == b5 && b5 == b7))
			{
				if (playerturn == 1)
				{
					playerturn = 2;
					std::cout << "Congrats ! ................Player " << playerturn << " wins...............!!";
					flag = false;
					break;
				}
				else
				{
					playerturn = 1;
					std::cout << "Congrats ! ................Player " << playerturn << " wins...............!!";
					flag = false;
					break;
				}

			}



			std::cout << "..........Player  " << playerturn << " turn......" << std::endl;
			std::cout << "Enter Number of box : \t";
			keypress = _getch();
			if (keypress == '0')
			{
				break;
			}


			if (playerturn == 1)
			{
				if (b1 == '1' && keypress == '1')
				{
					b1 = 'X';
					filledcounter++;
				}

				else if (b2 == '2' && keypress == '2')
				{
					b2 = 'X';
					filledcounter++;
				}

				else if (b3 == '3' && keypress == '3')
				{
					b3 = 'X';
					filledcounter++;
				}

				else if (b4 == '4' && keypress == '4')
				{
					b4 = 'X';
					filledcounter++;
				}

				else if (b5 == '5' && keypress == '5')
				{
					b5 = 'X';
					filledcounter++;
				}

				else if (b6 == '6' && keypress == '6')
				{
					b6 = 'X';
					filledcounter++;
				}

				else if (b7 == '7' && keypress == '7')
				{
					b7 = 'X';
					filledcounter++;
				}

				else if (b8 == '8' && keypress == '8')
				{
					b8 = 'X';
					filledcounter++;
				}

				else if (b9 == '9' && keypress == '9')
				{
					b9 = 'X';
					filledcounter++;
				}
				else
					continue;
			}
			else if (playerturn == 2)
			{
				if (b1 == '1' && keypress == '1')
				{
					b1 = 'O';
					filledcounter++;
				}

				else if (b2 == '2' && keypress == '2')
				{
					b2 = 'O';
					filledcounter++;
				}

				else if (b3 == '3' && keypress == '3')
				{
					b3 = 'O';
					filledcounter++;
				}

				else if (b4 == '4' && keypress == '4')
				{
					b4 = 'O';
					filledcounter++;
				}

				else if (b5 == '5' && keypress == '5')
				{
					b5 = 'O';
					filledcounter++;
				}

				else if (b6 == '6' && keypress == '6')
				{
					b6 = 'O';
					filledcounter++;
				}

				else if (b7 == '7' && keypress == '7')
				{
					b7 = 'O';
					filledcounter++;
				}

				else if (b8 == '8' && keypress == '8')
				{
					b8 = 'O';
					filledcounter++;
				}

				else if (b9 == '9' && keypress == '9')
				{
					b9 = 'O';
					filledcounter++;
				}
				else
					continue;

			}

			if (playerturn == 1)
			{
				playerturn = 2;
			}
			else if(playerturn==2)
				 playerturn= 1;
			std::cout << ".........Now Turn is of Player" << playerturn << "...................." << std::endl;

		}
	}
	else if (toss == 1)
	{
	std::cout << ".....................Player 1 turn First................" << std::endl;
		playerturn = 2;
		
		while (1)
		{
			system("CLS");
			// Board
			std::cout << "\n\n\n\n\n\n\n\n" << std::endl;
			std::cout << "                                        |         |" << std::endl;
			std::cout << "\t\t\t\t___" << b1 << "____|____" << b2 << "____|____" << b3 << "___  " << std::endl;
			std::cout << "                                        |         |" << std::endl;
			std::cout << "\t\t\t\t___" << b4 << "____|____" << b5 << "____|____" << b6 << "___  " << std::endl;
			std::cout << "                                        |         |" << std::endl;
			std::cout << "\t\t\t\t___" << b7 << "____|____" << b8 << "____|____" << b9 << "___  " << std::endl;
			std::cout << "                                        |         |" << std::endl;

			if ((b1 == b2 && b2 == b3) || (b4 == b5 && b5 == b6) || (b7 == b8 && b8 == b9))
			{
				if (playerturn == 1)
				{
					playerturn = 2;
					std::cout << "Congrats ! ................Player " << playerturn << " wins...............!!";
					flag = false;
					break;
				}
				else
				{
					playerturn = 1;
					std::cout << "Congrats ! ................Player " << playerturn << " wins...............!!";
					flag = false;
					break;
				}

			}
			if ((b1 == b4 && b4 == b7) || (b2 == b5 && b5 == b8) || (b3 == b6 && b6 == b9))
			{
				if (playerturn == 1)
				{
					playerturn = 2;
					std::cout << "Congrats ! ................Player " << playerturn << " wins...............!!";
					flag = false;
					break;
				}
				else
				{
					playerturn = 1;
					std::cout << "Congrats ! ................Player " << playerturn << " wins...............!!";
					flag = false;
					break;
				}

			}

			if ((b1 == b5 && b5 == b9) || (b3 == b5 && b5 == b7))
			{
				if (playerturn == 1)
				{
					playerturn = 2;
					std::cout << "Congrats ! ................Player " << playerturn << " wins...............!!";
					flag = false;
					break;
				}
				else
				{
					playerturn = 1;
					std::cout << "Congrats ! ................Player " << playerturn << " wins...............!!";
					flag = false;
					break;
				}
				
			}

			std::cout << "Player " << playerturn << " turn"<< std::endl;
			std::cout << "Enter Number of box :\t";
			keypress = _getch();
			if (keypress == '0')
			{
				break;
			}


			if (playerturn == 1)
			{
				if (b1 == '1' && keypress == '1')
				{
					b1 = 'X';
					filledcounter++;
				}

				else if (b2 == '2' && keypress == '2')
				{
					b2 = 'X';
					filledcounter++;
				}

				else if (b3 == '3' && keypress == '3')
				{
					b3 = 'X';
					filledcounter++;
				}

				else if (b4 == '4' && keypress == '4')
				{
					b4 = 'X';
					filledcounter++;
				}

				else if (b5 == '5' && keypress == '5')
				{
					b5 = 'X';
					filledcounter++;
				}

				else if (b6 == '6' && keypress == '6')
				{
					b6 = 'X';
					filledcounter++;
				}

				else if (b7 == '7' && keypress == '7')
				{
					b7 = 'X';
					filledcounter++;
				}

				else if (b8 == '8' && keypress == '8')
				{
					b8 = 'X';
					filledcounter++;
				}

				else if (b9 == '9' && keypress == '9')
				{
					b9 = 'X';
					filledcounter++;
				}
				else
					continue;
			}
			else if (playerturn == 2)
			{
				if (b1 == '1' && keypress == '1')
				{
					b1 = 'O';
					filledcounter++;
				}

				else if (b2 == '2' && keypress == '2')
				{
					b2 = 'O';
					filledcounter++;
				}

				else if (b3 == '3' && keypress == '3')
				{
					b3 = 'O';
					filledcounter++;
				}

				else if (b4 == '4' && keypress == '4')
				{
					b4 = 'O';
					filledcounter++;
				}

				else if (b5 == '5' && keypress == '5')
				{
					b5 = 'O';
					filledcounter++;
				}

				else if (b6 == '6' && keypress == '6')
				{
					b6 = 'O';
					filledcounter++;
				}

				else if (b7 == '7' && keypress == '7')
				{
					b7 = 'O';
					filledcounter++;
				}

				else if (b8 == '8' && keypress == '8')
				{
					b8 = 'O';
					filledcounter++;
				}

				else if (b9 == '9' && keypress == '9')
				{
					b9 = 'O';
				}
				else
					continue;
			}

			if (playerturn == 1)
			{
				playerturn = 2;
			}
			else
				playerturn = 1;
		}

		
	}
	std::cout << std::endl;
	std::cout << std::endl;

	std::cout << "        \t Game End.....Press Enter to Exit...!!\t            "<< std::endl;
	std::cout << std::endl;
	std::cout << std::endl;
	_getche();
	std::cout << std::endl;
	system("paused");
	


}