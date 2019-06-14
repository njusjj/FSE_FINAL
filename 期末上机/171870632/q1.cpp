#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	char *p[30];
	cout << "请输入第一字符ch:";
	char ch;
	cin >> ch;
	cout << endl;
	cout << "请依次输入字符串" << endl;
	int k = 0;
	for (int i = 0; i < 30; i++)
	{
		p[i] = new char[30];
		cin >> p[i];
		if (p[i][0] == '@')
			break;
		k++;
	}
	for (int i = 0; i < k; i++)
	{
		for (int j = 0; j < 30; j++)
		{
			if (p[i][j] == ch)
			{
				p[i][j] = '#';
			}
		}
	}
	for (int i = k-1; i >=0; i--)
	{
		for (int j = 0; j < i; j++)
		{
			if (strcmp(p[j],p[j+1])<0)
			{
				char *temp = p[j];
				p[j] = p[j + 1];
				p[j + 1] = temp;
			}
		}
	}
	for (int i = 0; i < k; i++)
	{
		for (int j = 0; p[i][j]; j++)
		{
			if (p[i][j] == '#')
				continue;
			else
				cout << p[i][j];
		}
		cout << endl;
	}
	return 0;
}