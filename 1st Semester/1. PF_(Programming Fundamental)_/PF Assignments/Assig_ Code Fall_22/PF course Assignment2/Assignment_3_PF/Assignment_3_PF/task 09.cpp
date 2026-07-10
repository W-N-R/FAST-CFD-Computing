#include<iostream>
#include<cstdlib>
#include<iomanip>
#include<conio.h>
#include<ctime>
int main()
{
	int destination = 1, snakes = 5, ladders = 7, dice, option, machineScore = 0, player1Score = 0, player2Score = 0, score = 0, lastPosition = 0, currentPosition = 0;
	std::cout << std::setw(1500) << "MAIN MENU" << std:: endl;
	std::cout << std::setw(65) << "SNAKE AND LADDER" << std::endl;
	std::cout << std::endl;

	std::cout << std::setw(65) << "CREDITS : CREATED BY MUHAMMAD QASIM NAVEED" << std::endl;
	std::cout << std::setw(65) << "INSTRUCTIONS : " << std::endl;
	std::cout << std::setw(65) << "Press 1~6 to roll dice" << std::endl;

	std::cout << std::setw(65) << "PLAY GAME" << std::endl;
	std::cout << std::setw(65) << "PRESS 1 FOR PLAYER VS PLAYER" << std::endl;
	std::cout << std::setw(65) << "PRESS 2 FOR PLAYER VS MACHINE" << std::endl << "\t\t=";
	std::cin >> option;
	std::cout << std::endl;

	std::cout << " Press Enter button to continue !"<< std::endl;

	_getch();


	if (option == 2)
	{
		system("CLS");
		srand(time(0));
		while (currentPosition <= 100)
		{

			dice = rand() % 6 + 1;
			std::cout << "Number on Dice of Machine =\t" << dice << std::endl;
			machineScore = score + dice;
			score = machineScore;
			currentPosition = machineScore;

			//Ladders
			if (score == 1)
			{
				currentPosition = 38;
				score = currentPosition;
				std::cout << "going up the ladder and now \t ";
			}
			else if (score == 4)
			{
				currentPosition = 14;
				score = currentPosition;
				std::cout << "going up the ladder and now \t ";
			}
			else if (score == 21)
			{
				currentPosition = 42;
				score = currentPosition;
				std::cout << "going up the ladder and now \t ";
			}
			else if (score == 28)
			{
				currentPosition = 84;
				score = currentPosition;
				std::cout << "going up the ladder and now \t ";
			}
			else if (score == 51)
			{
				currentPosition = 67;
				score = currentPosition;
				std::cout << "going up the ladder and now \t ";
			}
			else if (score == 72)
			{
				currentPosition = 91;
				score = currentPosition;
				std::cout << "going up the ladder and now \t ";
			}
			else if (score == 80)
			{
				currentPosition = 99;
				score = currentPosition;
				std::cout << "going up the ladder and now \t ";
			}

			//Snakes
			if (score == 17)
			{
				currentPosition = 7;
				score = currentPosition;
				std::cout << "Oops! There is a Snake and now \t";
			}
			else if (score == 62)
			{
				currentPosition = 19;
				score = currentPosition;
				std::cout << "Oops! There is a Snake and now \t";
			}
			else if (score == 54)
			{
				currentPosition = 34;
				score = currentPosition;
				std::cout << "Oops! There is a Snake and now \t";
			}
			else if (score == 87)
			{
				currentPosition = 36;
				score = currentPosition;
				std::cout << "Oops! There is a Snake and now \t";
			}
			else if (score == 98)
			{
				currentPosition = 79;
				score = currentPosition;
				std::cout << "Oops! There is a Snake and now \t";
			}
			
			if (currentPosition > 100)
			{
				currentPosition = currentPosition - dice;
				score = currentPosition;
			}
			std::cout << "Current position of Machine =\t" << currentPosition << std::endl << std::endl;
			std::cout << "Score of Machine =\t" << score << std::endl << std::endl;

			if (currentPosition == 100)
			{
				std::cout << "Hurrah!!!..Machine wins !..." << std::endl;
				break;
			}

			dice = rand() % 6 + 1;
			std::cout << "Number on Player 1 dice =\t" << dice << std::endl;
			player1Score = score + dice;
			score = player1Score;
			currentPosition = player1Score;

			//Ladders
			if (score == 1)
			{
				currentPosition = 38;
				score = currentPosition;
				std::cout << "going up the ladder and now \t ";
			}
			else if (score == 4)
			{
				currentPosition = 14; 
				score = currentPosition;
				std::cout << "going up the ladder and now \t ";
			}
			else if (score == 21)
			{
				currentPosition = 42;
				score = currentPosition;
				std::cout << "going up the ladder and now \t ";
			}
			else if (score == 28)
			{
				currentPosition = 84;
				score = currentPosition;
				std::cout << "going up the ladder and now \t ";
			}
			else if (score == 51)
			{
				currentPosition = 67;
				score = currentPosition;
				std::cout << "going up the ladder and now \t ";
			}
			else if (score == 72)
			{
				currentPosition = 91;
				score = currentPosition;
				std::cout << "going up the ladder and now \t ";
			}
			else if (score == 80)
			{
				currentPosition = 99;
				score = currentPosition;
				std::cout << "going up the ladder and now \t ";
			}

			//Snakes
			if (score == 17)
			{
				currentPosition = 7;
				score = currentPosition;
				std::cout << "Oops! There is a Snake and now \t";
			}
			else if (score == 62)
			{
				currentPosition = 19;
				score = currentPosition;
				std::cout << "Oops! There is a Snake and now \t";
			}
			else if (score == 54)
			{
				currentPosition = 34;
				score = currentPosition;
				std::cout << "Oops! There is a Snake and now \t";
			}
			else if (score == 87)
			{
				currentPosition = 36;
				score = currentPosition;
				std::cout << "Oops! There is a Snake and now \t";
			}
			else if (score == 98)
			{
				currentPosition = 79;
				score = currentPosition;
				std::cout << "Oops! There is a Snake and now \t";
			}

			std::cout << "Current position of Player 1 =\t" << currentPosition << std::endl << std::endl;
			if (currentPosition > 100)
			{
				currentPosition = currentPosition - dice;
				score = currentPosition;
			}
			std::cout << "Current position of Player 1 =\t" << currentPosition << std::endl << std::endl;
			std::cout << "Score of Player1 =\t" << score << std::endl << std::endl;

			if (currentPosition == 100)
			{
				std::cout << "Hurrah!!!.. Player1 wins !..." << std::endl;
				break;
			}

		}


	}

	else if (option == 1)
	{
				system("CLS");
				srand(time(0));
				while (currentPosition <= 100)
				{

					dice = rand() % 6 + 1;
					std::cout << "Number on Dice of Player 1 =\t" << dice << std::endl;
					player1Score = score + dice;
					score = player1Score;
					currentPosition = player1Score;

					//Ladders
					if (score == 1)
					{
						currentPosition = 38;
						score = currentPosition;
						std::cout << "going up the ladder and now \t ";
					}
					else if (score == 4)
					{
						currentPosition = 14;
						score = currentPosition;
						std::cout << "going up the ladder and now \t ";
					}
					else if (score == 21)
					{
						currentPosition = 42;
						score = currentPosition;
						std::cout << "going up the ladder and now \t ";
					}
					else if (score == 28)
					{
						currentPosition = 84;
						score = currentPosition;
						std::cout << "going up the ladder and now \t ";
					}
					else if (score == 51)
					{
						currentPosition = 67;
						score = currentPosition;
						std::cout << "going up the ladder and now \t ";
					}
					else if (score == 72)
					{
						currentPosition = 91;
						score = currentPosition;
						std::cout << "going up the ladder and now \t ";
					}
					else if (score == 80)
					{
						currentPosition = 99;
						score = currentPosition;
						std::cout << "going up the ladder and now \t ";
					}

					//Snakes
					if (score == 17)
					{
						currentPosition = 7;
						score = currentPosition;
						std::cout << "Oops! There is a Snake and now \t";
					}
					else if (score == 62)
					{
						currentPosition = 19;
						score = currentPosition;
						std::cout << "Oops! There is a Snake and now \t";
					}
					else if (score == 54)
					{
						currentPosition = 34;
						score = currentPosition;
						std::cout << "Oops! There is a Snake and now \t";
					}
					else if (score == 87)
					{
						currentPosition = 36;
						score = currentPosition;
						std::cout << "Oops! There is a Snake and now \t";
					}
					else if (score == 98)
					{
						currentPosition = 79;
						score = currentPosition;
						std::cout << "Oops! There is a Snake and now \t";
					}

					if (currentPosition > 100)
					{
						currentPosition = currentPosition - dice;
						score = currentPosition;
					}
					std::cout << "Current position of player1 =\t" << currentPosition << std::endl << std::endl;
					std::cout << "Score of player1 =\t" << score << std::endl << std::endl;

					if (currentPosition == 100)
					{
						std::cout << "Hurrah!!!..Player1 wins !..." << std::endl;
						break;
					}

					dice = rand() % 6 + 1;
					std::cout << "Number on Player 2 dice =\t" << dice << std::endl;
					player2Score = score + dice;
					score = player2Score;
					currentPosition = player2Score;

					//Ladders
					if (score == 1)
					{
						currentPosition = 38;
						score = currentPosition;
						std::cout << "going up the ladder and now \t ";
					}
					else if (score == 4)
					{
						currentPosition = 14;
						score = currentPosition;
						std::cout << "going up the ladder and now \t ";
					}
					else if (score == 21)
					{
						currentPosition = 42;
						score = currentPosition;
						std::cout << "going up the ladder and now \t ";
					}
					else if (score == 28)
					{
						currentPosition = 84;
						score = currentPosition;
						std::cout << "going up the ladder and now \t ";
					}
					else if (score == 51)
					{
						currentPosition = 67;
						score = currentPosition;
						std::cout << "going up the ladder and now \t ";
					}
					else if (score == 72)
					{
						currentPosition = 91;
						score = currentPosition;
						std::cout << "going up the ladder and now \t ";
					}
					else if (score == 80)
					{
						currentPosition = 99;
						score = currentPosition;
						std::cout << "going up the ladder and now \t ";
					}

					//Snakes
					if (score == 17)
					{
						currentPosition = 7;
						score = currentPosition;
						std::cout << "Oops! There is a Snake and now \t";
					}
					else if (score == 62)
					{
						currentPosition = 19;
						score = currentPosition;
						std::cout << "Oops! There is a Snake and now \t";
					}
					else if (score == 54)
					{
						currentPosition = 34;
						score = currentPosition;
						std::cout << "Oops! There is a Snake and now \t";
					}
					else if (score == 87)
					{
						currentPosition = 36;
						score = currentPosition;
						std::cout << "Oops! There is a Snake and now \t";
					}
					else if (score == 98)
					{
						currentPosition = 79;
						score = currentPosition;
						std::cout << "Oops! There is a Snake and now \t";
					}

					std::cout << "Current position of Player 1 =\t" << currentPosition << std::endl << std::endl;
					if (currentPosition > 100)
					{
						currentPosition = currentPosition - dice;
						score = currentPosition;
					}
					std::cout << "Current position of Player 2 =\t" << currentPosition << std::endl << std::endl;
					std::cout << "Score of Player2 =\t" << score << std::endl << std::endl;

					if (currentPosition == 100)
					{
						std::cout << "Hurrah!!!.. Player2 wins !..." << std::endl;
						break;
					}

				}
	}
	else
	std::cout << "			Wrong Input !			" << std::endl<< std::endl;


	system("pause");
}