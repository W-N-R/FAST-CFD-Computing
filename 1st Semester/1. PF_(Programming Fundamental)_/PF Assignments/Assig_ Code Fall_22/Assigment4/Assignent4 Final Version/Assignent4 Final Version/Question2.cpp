#include<iostream>
using namespace std;
int main()
{
	const int size = 10;
	int num[size] = {100,153,1256,1250,2700,371,567,900,972,1000};
	int temp = 0;
	//cout << "Enter Number :\t";
	//cin >> num;
	int rem = 0, cube = 0, sum = 0;
	for (int i = 0; i < size; i++)
	{
		sum = 0;
		temp = num[i];
		while (temp != 0)
		{
			rem = temp % 10;
			cube = rem * rem * rem;
			temp = temp / 10;
			sum = sum + cube;
		}
		if (sum == num[i])
		{
			cout << sum << " \t";
		}
	}
	
	cout << endl << endl;
}
