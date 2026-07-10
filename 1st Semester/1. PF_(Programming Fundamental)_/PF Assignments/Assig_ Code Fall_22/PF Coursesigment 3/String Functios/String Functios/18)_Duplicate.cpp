////calculation of number of duplicate letters in a string.
//#include <iostream>
//#include<string>
//using namespace std;
//int main()
//{
//    int temp = 0, length;
//
//    string str;
//    string uniqe = "";
//    cout << "Enter string \t";
//    getline(cin, str);
//    length = str.length();
//
//    for (int k = 0; k <= length; k++)
//    {
//        for (int i = 0; i < length - 1; i++)
//        {
//            if (str[i] > str[i + 1])
//            {
//
//                temp = str[i];
//                str[i] = str[i + 1];
//                str[i + 1] = temp;
//
//            }
//
//        }
//    }
//
//    char ch = '\0';
//
//    for (int i = 0; i < str.length(); i++)
//    {
//        if (ch != str[i])
//        {
//            ch = str[i];
//            if (ch != ' ')
//            {
//                uniqe = uniqe + ch;
//            }
//
//        }
//    }
//
//
//    int duplicatecount = 0;
//    int chcount = 0;
//
//    for (int i = 0; i < uniqe.length(); i++)
//    {
//        ch = uniqe[i];
//        chcount = 0;
//        for (int k = 0; k < str.length(); k++)
//        {
//            if (str[k] == ch)
//            {
//                chcount++;
//            }
//
//        }
//        if (chcount > 1)
//        {
//            duplicatecount = duplicatecount + chcount;
//        }
//    }
//    cout << endl;
//    cout << "Number of duplicate characters in the said string:\t" << duplicatecount;
//}