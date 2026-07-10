#include<iostream>
using namespace std;
int main()
{
	int option;
	cout << "----------------------Main Menu-------------------------\n";
	cout << "Enter \n \t 1_ for Square \n\t 2_ for Triangle \n\t 3_ for Rectangle \n\t 4_ for Parallelogram \n\t 5_ for Rhombus \n\t 6_ for Exit\n";
	cin >> option;
	//cout << "Hello World";

	if (option == 1)
	{
		cout << "Enter \n\t 1_for Filled Square\n\t 2_for Hollow square  ";
		int choice;
		cin >> choice;
		if (choice == 1)
		{
			//Filled Square:
			for (int i = 0; i <= 20; i++)
			{
				for (int j = 0; j <= 20; j++)
				{
					cout << "*";
				}
				cout << endl;
			}
		}
		else if (choice == 2)
		{

			//Hollow Square :
			//print top line
			int size = 20;
			for (int j = 0; j <= size; j++)
			{
				cout << "*";
			}
			cout << endl;
			//print middle line
			for (int i = 0; i <= size - 2; i++)
			{
				cout << '*';
				for (int i = 0; i <= size - 2; i++)
				{
					cout << " ";
				}
				cout << "*" << endl;
			}
			//print last line
			for (int k = 0; k <= size; k++)
			{
				cout << "*";
			}
		}
		else
			cout << "Wrong Entry!";

	}

	if (option == 2)
	{
		cout << "Enter \n\t 1_for Filled Triangle\n\t 2_for Hollow Triagle  ";
		int choice;
		cin >> choice;
		if (choice == 1)
		{
			//Filled Triangle :
			int maxwidth = 19;
			for (int i = 0; i <= maxwidth; i++)
			{
				for (int k = maxwidth; k >= i; k--)
				{
					cout << " ";
				}
				for (int j = 0; j < i; j++)
				{
					cout << "*";
				}
				for (int j = 1; j < i; j++)
				{
					cout << "*";
				}
				cout << endl;
			}
		}

		else if (choice == 2)
		{
			//Hollow Triangle :
			int maxwidth = 20;
			for (int n = 0; n <= maxwidth; n++)
			{
				cout << " ";
			}
			cout << "*";
			cout << endl;
			for (int i = 1; i <= maxwidth; i++)
			{
				for (int k = maxwidth; k >= i; k--)
				{
					cout << " ";
				}
				cout << "*";
				for (int j = 0; j < i; j++)
				{
					cout << " ";
				}
				for (int j = 1; j < i; j++)
				{
					cout << " ";
				}
				cout << "*";
				cout << endl;
			}
			cout << " ";
			for (int k = 0; k <= maxwidth + maxwidth; k++)
			{
				cout << "*";
			}
		}
		else
			cout << "Wrong Entry!";
	}



	if (option == 3)
	{
		cout << "Enter \n\t 1_for Filled Rectangle\n\t 2_for Hollow Rectangle  ";
		int choice;
		cin >> choice;

		if (choice == 1)
		{
			//Filled Rectangle :
			int width = 10, height = 50;
			cout << endl;
			for (int i = 0; i <= width; i++)
			{
				cout << "\t";
				for (int j = 0; j <= height; j++)
				{
					cout << "*";
				}
				cout << endl;
			}

		}
		else if(choice==2)
		{

			//hollow rectangle
			int rows = 6, columns = 20;
			for (int i = 1; i <= rows; i++)
			{
				for (int j = 1; j <= columns; j++)
				{
					if (i == 1 || i == rows || j == 1 || j == columns)
						cout << "*";
					else
						cout << " ";
				}
				cout << endl;
			}
		}
		else
			cout << "Wrong Entry!";


	}

	if (option == 4)
	{
		cout << "Enter \n\t 1_for Filled Parallelogram\n\t 2_for Hollow Parallelogram ";
		int choice;
		cin >> choice;
		if (choice == 1)
		{
			// Filled parallelogram
			int i, j, rows = 20, columns = 15;
			char ch = '*';
			cout << "\n";

			for (i = 1; i <= rows; i++)
			{
				for (j = 1; j <= rows - i; j++)
				{
					cout << " ";
				}
				for (j = 1; j <= columns; j++)
				{
					cout << ch;
				}
				cout << "\n";
			}

		}
		else if(choice==2)
		{
			// Hollow Prallelogram :
			int i, j, rows = 20, columns = 15;
			char ch = '*';
			cout << "\n";
			for (i = 1; i <= rows; i++)
			{
				for (j = 1; j <= rows - i; j++)
				{
					cout << " ";
				}
				for (j = 1; j <= columns; j++)
				{
					if (i == 1 || i == rows || j == 1 || j == columns)
					{
						cout << ch;
					}
					else
						cout << " ";
				}
				cout << endl;
			}
		}
		else
			cout << "Wrong Entry!";

	}

}