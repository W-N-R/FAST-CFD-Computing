/*Task_4:
		perfect number*/
#include<iostream>
#include<string>
using namespace std;

void func(int x[1000], int sum, int y[10] , int s)
{
	s = 0;
	for (int i = 1; i < 1000; i++)
	{ 
		x[i] = i;
		sum = 0;
		for (int j = 1; j < i; j++)
		{
			
			if (x[i] % j == 0)
			{
				cout <<endl<< " devisor = " << j << endl;
				sum = sum + j;
				
				if (sum == x[i])
				{
					cout << "perfect square = " << x[i] << endl<<endl<<endl;
					y[s] = x[i];
					s++;
				}

				
				
			}
			
		}
		cout << endl << endl;
		
	}

	for (int i = 0; i < 10; i++)
	{
		cout <<"perfect number are = "<< y[i] << endl;
	}
}

int main()
{

	int x[1000], sum = 0, y [10], s = 0;
	
	func( x , sum, y , s);

	return 0;
}