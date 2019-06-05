#include<iostream>
#include<string>
using namespace std;
int main()
{
	char str[1000];
	cin.getline(str, 1000);
	int length = strlen(str);
	char result[2][1000];
	int k = 0;
	for (int i = 0; i < length; i++)
	{

		result[0][k] = str[i];
		//cout << result[0][i] << endl;
		//cout << str[i] << endl;
		int flag = 1;
		if (str[i + 1] == str[i] && i + 1 < length)
		{
			int j;
			for (j = i; j < length; j++)
			{
				if (str[j] != str[i])
				{
					flag = 0;
					break;

				}
			}
			result[1][k] = '0' + j - i;
			//cout << j - i<<endl;
			k++;
			i = j - 1;
		}
		else if (i + 1 == length)
		{
			result[1][k] = '0' + 1;
			k++;
			break;
		}
		if (flag == 1)
		{
			result[1][k] = '0' + 1;
			k++;
		}

	}
	result[0][k] = '\0';
	for (int i = 0; i < 3; i++)
	{
		cout << result[0][i];
	}
	for (int i = 0; result[0][i]; i++)
	{
		//if (!(result[0][i] <= 'Z' &&  result[0][i] >= 'A')) break;
		if (result[1][i] == '1')
		{
			cout << result[0][i];
		}
		else
		{
			cout << result[1][i] << result[0][i];
		}
	}
	return 0;
}