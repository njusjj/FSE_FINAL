#include<iostream>
#include<string>
using namespace std;
int main()
{
	char str1[1000], str2[1000];
	cout << "输入第一个：" << endl;
	cin.getline(str1, 1000);
	cout << "输入第二个：" << endl;
	cin.getline(str2, 1000);
	char result[1000];
	int len1 = strlen(str1);
	int len2 = strlen(str2);
	for (int i = 0, j = len1 - 1; i < j; i++, j--)
	{
		char temp = str1[i];
		str1[i] = str1[j];
		str1[j] = temp;
	}
	//cout << str1 << endl;
	for (int i = 0, j = len2 - 1; i < j; i++, j--)
	{
		char temp = str2[i];
		str2[i] = str2[j];
		str2[j] = temp;
	}
	//cout << str2 << endl;
	int flag = 1;
	for (int i = 0;; i++)
	{
		if (i < len1&&i < len2)
		{
			if (flag == 0)
			{
				if (str1[i] - '0' + str2[i] - '0' + 1 >= 10)
				{
					result[i] = str1[i] - '0' + str2[i] - '0' + 1 - 10 + '0';
					flag = 0;
				}
				else
				{
					result[i] = str1[i] - '0' + str2[i] - '0' + 1 + '0';
					flag = 1;
				}
			}
			else if (flag == 1)
			{

				if (str1[i] - '0' + str2[i] - '0' >= 10)
				{
					result[i] = str1[i] - '0' + str2[i] - '0' - 10 + '0';
					flag = 0;
				}
				else
				{
					result[i] = str1[i] - '0' + str2[i] - '0' + '0';
					flag = 1;
				}
			}
		}
		else if (len1 <= i && len2 > i)
		{
			if (flag == 0)
			{
				if (str2[i] + 1 - '0' >= 10)
				{
					result[i] = str2[i] + 1 - 10;
					flag = 0;
				}
				else
				{
					result[i] = str2[i] + 1 - 10;
					flag = 1;
				}
			}
			else
			{
				result[i] = str2[i];
			}

		}
		else if (len2 <= i && len1 > i)
		{
			if (flag == 0)
			{
				if (str1[i] + 1 - '0' >= 10)
				{
					result[i] = str1[i] + 1 - 10;
					flag = 0;
				}
				else
				{
					result[i] = str1[i] + 1 - 10;
					flag = 1;
				}
			}
			else
			{
				result[i] = str1[i];
			}
		}
		else if (len2 <= i && len1 <= i)
		{
			if (flag == 0)
			{
				result[i] = '0' + 1;
				result[i + 1] = '\0';
			}
			else
			{
				result[i] = '\0';
			}break;
		}

	}
	for (int i = 0, j = strlen(result) - 1; i < j; i++, j--)
	{
		char temp = result[i];
		result[i] = result[j];
		result[j] = temp;
	}
	//cout << strlen(result) << endl;
	for (int i = 0; i < strlen(result); i++)
	{
		cout << result[i];
	}
	return 0;
}
//112233445566778899
//998877665544332211