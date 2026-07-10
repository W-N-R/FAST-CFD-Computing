/* Task_07:
			Write a C++ Program that is using a sentinel control while loop statement and if statement to
write a program that can be used at a department store’s register the records the number of customers
who spent between $0.00-$200.00, and the number of customers who spent between $200.01-$800.01
and the number of customers who spent $800.01 or more. At the end of the day, the program will print
out the number of customers in each of categories and total spending in each categories.*/
#include<iostream>
int main()
{
	float spending, tspending1=0,tspending2=0,tspending3=0;
	int count1=0,count2=0, count3=0;
	int option;
	while(1)
	{
		std::cout << "Pls Enter Customer's spending :\t";
		std::cin >> spending;
		if (spending > 0.00 && spending <= 200.00)
		{
			count1 = count1 + 1;
			tspending1 = tspending1 + spending;
		}
		else if (spending >= 200.01 && spending <= 800.01)
		{
			count2 = count2 + 1;
			tspending2 = tspending2 + spending;
		}
		else if (spending >= 800.01)
		{
			count3 = count3 + 1;
			tspending3 = tspending3 + spending;
		}
		std::cout << std::endl;
		std::cout << "---------------------------------------------------------------";
		std::cout << std::endl;
		std::cout << "Wants to continue the program ?" << std::endl<<"Enter 0 for Yes and any other Number for No"<<std::endl;
		std::cin >> option;
		if (option != 0)
		{
			break;
		}

	}
	std::cout << std::endl;
	std::cout << "The Total Number Of customers with their spendings between		0.00$ ~ 200.0$        =\t"	<<	count1	<< std::endl;
	std::cout << "The Total Number Of customers with their spendings between		200.01.00$ ~ 800.01$  =\t"	<<	count2	<< std::endl;
	std::cout << "The Total Number Of customers with their spendings more than		800.01$			  =\t"	<<	count3	<< std::endl;
	std::cout << "Total Spendings between	0.00$~200.0$	=\t" << tspending1<< std::endl;
	std::cout << "Total Spendings between	200.01$~800.1$	=\t" << tspending2<< std::endl;
	std::cout << "Total Spendings more than	800.01$			=\t" << tspending1<< std::endl;

}