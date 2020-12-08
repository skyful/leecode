
#include <iostream>
#include <string>
#include <queue>
#include <map>

using namespace std;
string numAdd(string cur, int addIndex)
{
	if (cur[addIndex] == '9')
	{
		cur[addIndex] = '0';
	}
	else {
		cur[addIndex] += 1;
	}
	return cur;

}
string numMinus(string cur, int minusIndex)
{
	if (cur[minusIndex] == '0')
	{
		cur[minusIndex] = '9';
	}
	else {
		cur[minusIndex] -= 1;
	}
	return cur;
}
int openLock(string start, string target)
{
	queue<string> q;
	q.push(start);
	map<string, char> m;
	int step = 0;

	while (!q.empty())
	{
		int sz = q.size();
		for (int i = 0; i < sz; ++i)
		{
			string cur = q.front();
			q.pop();
			if (cur == target)
			{
				return step;
			}
			//因为是四位的密码锁，所以每向下移动一步，都有四种可能
			for (int j = 0; j < 4; ++j)
			{
				
				string add = numAdd(cur, j);
				if (m.find(add) == m.end())
				{
					q.push(add);
					m[add] = '1';
				}
				
				string minus = numMinus(cur, j);
				if (m.find(minus) == m.end())
				{
					q.push(minus);
					m[minus] = '1';
				}
			}
			
			
		}
		step++;
	}
	return -1;
}