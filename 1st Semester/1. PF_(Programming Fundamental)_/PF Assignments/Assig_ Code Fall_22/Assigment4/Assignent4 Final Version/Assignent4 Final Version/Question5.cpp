#include<iostream>
#include<cstdlib>
#include<time.h>
using namespace std;
int main()
{
	int a, b, d, e;
	char c;
	int count = 1, repeat = 1, u = 1;
	for (int count = 1; count != 999; count++)
	{
		cin >> count;
		if (count != 999)
		{
			srand(time(0));
			a = rand() % 9;
			srand(time(0));
			b = rand() % 9;
			srand(time(0));
			c = rand() % 3;
			if (c == 0)
			{
				c = '+';
				e = a + b;
			}
			else if (c == 1)
			{
				c = '*';
				e = a * b;
			}
			else if (c == 2)
			{
				c = '-';
				e = a - b;
			}
			else
			{
				c = '/';
				e = a / b;
			}
			cout << a << c << b << endl;
			cin >> d;
			if (d == e)
			{
				cout << "very good";

			}
			else
			{
				cout << "N0.Please try again";
				while (repeat <= 3)
				{
					cout << a << c << b << endl;
					cin >> d;
					if (d == e)
					{
						repeat = 4;
					}
					else
						repeat++;
				}

			}
		}

	}


	cout << a << c << b << endl;
	cout << d;
	cout << e;
}