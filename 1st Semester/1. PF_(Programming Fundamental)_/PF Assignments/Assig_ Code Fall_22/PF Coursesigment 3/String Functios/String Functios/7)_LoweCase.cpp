/*
//Conversion into lower case :

#include<iostream>
using namespace std;
int main()
{
	string str = "I Study In Fast University";
	cout << "String Before Conversion into Lower Case Letter :\t" << str;
	char ch;
	int length = 0;
	while (str[length] != '\0')
	{
		ch = str[length];
		length++;
	}
	for (int i = 0; i <length; i++)
	{
		if (str[i] >= 65 && str[i] <= 90)
		{
			str[i] = str[i] + 32;
		}

	}
	cout << "\n\nString After Lower Case Conversion :\t" << str;
 
	
	
	
	
	return 0;
}*/
