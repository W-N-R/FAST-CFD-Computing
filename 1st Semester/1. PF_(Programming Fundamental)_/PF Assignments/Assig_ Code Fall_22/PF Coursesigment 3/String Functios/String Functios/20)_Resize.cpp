/ #include <iostream>
using namespace std;

int main() 
{
	int size;
	string str = "I Study In Fast University";
	cout << "The original string is: " << str << endl;
	
	//str.resize(10);
	//cout << "The string after using resize is: " << str << endl;
	
	cout << "Enter Size of string you want :\t";
	cin >> size;
	
	cout << "The string after using resize is: \t";
	
	for (int i = 0; i < size; i++)
	{
		cout << str[i];

	}
	return 0;
}
