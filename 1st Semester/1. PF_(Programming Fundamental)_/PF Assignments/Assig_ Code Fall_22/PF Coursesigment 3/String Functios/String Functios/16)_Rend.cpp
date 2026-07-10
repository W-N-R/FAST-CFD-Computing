//
////Rend Strings Function:
//
//#include <iostream>
//using namespace std;
//
//int main()
//{
//	string str1 = "I study in Fast Uni";
//	string str2 = "";
//	char ch;
//	int length = 0, n;
//
//	while (str1[length] != '\0')
//	{
//		ch = str1[length];
//		length++;
//	}
//	cout << "length of string is:\t" << length << endl;
//
//	cout << "How many characters to copy from right side :\t";
//	cin >> n;
//
//	for (int i = length - n; i < length; i++)
//	{
//		str2 = str2 + str1[i];
//
//	}
//
//	cout << str2;
//	for (int i = 0; i < n; i++)
//	{
//		str2 = str2 + str1[i];
//
//	}
//
//	cout << "Reverse End Function :\t" << str2;
//}