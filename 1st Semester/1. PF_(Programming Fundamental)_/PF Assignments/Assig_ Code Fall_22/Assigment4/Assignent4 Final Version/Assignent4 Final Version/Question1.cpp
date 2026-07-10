#include<iostream>
using namespace std;
int main()
{
	int num,temp=0;
	cout << "rmstrong Numbers between 1 and 600 are :\t";
	int rem=0,cube=0,sum=0;
	for (int i = 1; i <= 600; i++)
	{
		sum = 0;
		temp = i;
		while (temp != 0)
		{
			rem = temp % 10;
			cube = rem * rem * rem;
			temp = temp / 10;
			sum = sum + cube;
		}
		if (sum == i)
		{
			cout << sum << " \t";
		}
	}
	cout << endl << endl;
}