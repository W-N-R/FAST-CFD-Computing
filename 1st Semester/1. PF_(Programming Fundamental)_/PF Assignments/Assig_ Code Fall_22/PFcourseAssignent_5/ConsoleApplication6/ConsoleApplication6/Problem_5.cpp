//#include<iostream>
//#include<conio.h>
//#include<stdlib.h>
//using namespace std;
//int main()
//{
//	int columnum = 0;
//	bool flag = true;
//	int Rowsize = 14, Columsize = 7, Class, rownum;
//	char arr[14][7], seatlocation;;
//
//	for (int row = 1; row < Rowsize; row++)
//	{
//		for (int col = 1; col < Columsize; col++)
//		{
//			arr[row][col] = '*';
//		}
//	}
//
//
//	while (flag = true)
//	{
//		system("CLS");
//
//
//		cout << "\tA B C D E F " << endl;
//		for (int row = 1; row < Rowsize; row++)
//		{
//			cout << "ROW " << row << " \t";
//			for (int col = 1; col < Columsize; col++)
//			{
//				cout << arr[row][col] << " ";
//			}
//			cout << endl;
//		}
//
//		cout << "Enter \t1-for First Class Seat \n\t 2-for Business Class Seat \n\t 3-for Economic Class  Seat" << endl;
//		cin >> Class;
//
//		cout << "Enter Row Number (1~13) :\t";
//		cin >> rownum;
//		cout << "Enter Seat number (A~F) :\t";
//		cin >> seatlocation;
//
//
//		if (seatlocation == 'A' || seatlocation == 'a')
//		{
//			columnum = 1;
//		}
//		else if (seatlocation == 'B' || seatlocation == 'b')
//		{
//			columnum = 2;
//		}
//		else if (seatlocation == 'C' || seatlocation == 'c')
//		{
//			columnum = 3;
//		}
//		else if (seatlocation == 'D' || seatlocation == 'd')
//		{
//			columnum = 4;
//		}
//		if (seatlocation == 'E' || seatlocation == 'e')
//		{
//			columnum = 5;
//		}
//		else if (seatlocation == 'F' || seatlocation == 'f')
//		{
//			columnum = 6;
//		}
//		else
//			cout << "Invalid input !";
//
//
//
//
//		if (Class > 13)
//		{
//			cout << "invalid row number";
//			_getch();
//			continue;
//		}
//
//
//
//
//		if (Class == 1)
//		{
//
//			if (rownum > 2)
//			{
//				cout << "Row is not First Class";
//				_getch();
//				continue;
//			}
//
//
//
//		}
//		if (Class == 2)
//		{
//			if (rownum < 3 || rownum >7)
//			{
//				cout << "Not Business Class" << endl;
//				_getch();
//				continue;
//			}
//
//		}
//		if (Class == 3)
//		{
//			if (rownum < 8 || rownum>13)
//			{
//				cout << "Error! Not Economy Class" << endl;
//				_getch();
//
//			}
//
//
//		}
//
//
//		if (arr[rownum][columnum] == 'X')
//		{
//			cout << "already booked" << endl;
//			_getch();
//			continue;
//		}
//		else
//		{
//			arr[rownum][columnum] = 'X';
//		}
//
//
//		if (Class == 0)
//		{
//			flag = false;
//			break;
//		}
//
//	}
//}