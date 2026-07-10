/* Assignment Task-1:
				Write a C++ code that takes an integer n as an input from the user which is greater than 5 else print
Incorrect Input! If n multiple of 5 then take a variable temp = n/2 and print temp times n else take a
variable temp = n/3 and print temp times n.*/

#include<iostream>
int main()
{
	int n, temp, count = 0;
	std::cout << "Enter Number =\t";
	std::cin >> n;

	if (n < 5)
	{
		std::cout << "Invalid Input...!!!" << std::endl;
	}
	else if (n % 5 == 0)
	{
		temp = n / 2;
		while (count < temp)
		{
			std::cout << n;
			count++;
		}
	}
	else
	{
		temp = n / 3;
		while (count < temp)
		{
			std::cout << n;
			count++;
		}
	}
}