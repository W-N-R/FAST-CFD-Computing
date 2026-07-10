/*
//Upper ase into Lower Case conversion string:

#include<iostream>
using namespace std;
int main()
{
	string str = "I Study In Fast University";
	cout << "String Before Converion into upper case letter :\t" << str;
	cout << endl << endl;
	char ch;
	int length = 0;
	while (str[length] != '\0')
	{
		ch = str[length];
		length++;
	}
	for (int i = 0; i < length; i++)
	{
		if (str[i] >= 97 && str[i] <= 122)
		{
			str[i] = str[i] - 32;
		}
	}
	cout << "String After Convert into Upper Case :\t" << str;
	cout << endl << endl;
	return 0;
}*/

