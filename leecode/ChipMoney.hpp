#include <algorithm>
#include <vector>
using namespace std;


int coinChange(int coins[], int coinsCount, int amount,vector<int>& mem)
{
	
	if (amount == 0) return 0;
	if (amount < 0) return -1;
	if (mem[amount] > 0) return mem[amount];
	int res = amount;
	for (int i = 0; i < coinsCount; ++i) 
	{
		int amountRes = coinChange(coins, coinsCount, amount - coins[i],mem);
		if (amountRes == -1) continue;
		res = std::min(res, amountRes+1);
	}
	mem[amount] = res;
	return res;
}

int coinChange2(int coins[], int coinCount, int amount)
{
	vector<int> dp(amount + 1, amount + 1);
	dp[0] = 0;
	//外层for循环遍历所有状态的所有数值
	for (int i = 0; i < dp.size(); ++i)
	{
		//内循环 遍历所有选择的最小值
		for (int j = 0; j < coinCount; ++j)
		{
			if (i - coins[j] < 0) continue;
			dp[i] = min(dp[i], 1 + dp[i - coins[j]]);
		}
	}
	return (dp[amount] == amount + 1) ? -1 : dp[amount];
}