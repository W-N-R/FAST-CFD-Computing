/*Task_05:
		Write a C++ code that takes a binary input from the user and contains more than six and less than ten
digits and counts the total 1’s present in it. If the digits are less than six it will print Digits are less
than six and if the digits are greater than 10 it will print Digits are greater than 10. In case if the
user has entered a number that is not a binary number than it will print Incorrect Input! It is not a
Binary Number.*/

#include<iostream>
int main()
{
	int num , rem = 0 ,digitcount = 0, oncecount = 0;
	std::cout << "Enter Binary Number :\t";
	std::cin >> num;
	while (num != 0)
	{
		rem = num % 10;
		digitcount = digitcount + 1;
		num = num / 10;

		if (rem == 1)
		{
			oncecount = oncecount + 1;
		}
		if (rem > 1)
		{
			std::cout << "Number is not binary...plss..Enter Binary Number"<<std::endl;
			break;
		}
		

	}
	if (digitcount > 6 && digitcount < 10)
	{
		std::cout << "Digits are greater than 6 and less than 10" << std::endl;
		std::cout << "number of ones = \t" << oncecount << std::endl;

	}
	else if (digitcount < 6)
	{
		std::cout << "Digits are less than 6 !" << std::endl;
	}
	else if (digitcount > 10)
	{
		std::cout << "Digits are greater than 10 !" << std::endl;
	}


	system("pause");
}
