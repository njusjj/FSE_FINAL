#include<iostream>
#include<vector>
using namespace std;
int maxProfit(vector<int> &prices)
{
	int len = prices.size();
	if (len == 0 || len == 1)
		return 0;
	int profit = 0;
	for (int i = 1; i < len; i++)
	{
		int sum = prices[i] - prices[i - 1];
		if (sum > 0)
			profit += sum;
	}
	return profit;
}
int main()
{
	int n;
	cout << "请输入天数:" << endl;
	cin >> n;
	vector<int> price(n);

	cout << "输入每天价格" << endl;
	for (int i = 0; i < n; i++)
	{
		cin >> price[i];
	}
	int max = maxProfit(price);
	cout << max;
	return 0;
}