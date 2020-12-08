#include<iostream>
#include<vector>
using namespace std;
#define N	5

vector<vector<string> > res;
bool isValid(vector<string>& board, int row, int col)
{
	int n = board.size();
	//判断同一列是否有可攻击皇后
	for (int i = 0; i < n; ++i)
	{
		if (board[i][col] == 'Q')
		{
			return false;
		}
	}
	//不需要判断同一行，因为每行只选择一个点
	//判断右上方是否有冲突
	for (int i = row - 1, j = col + 1; i >= 0 && j < n; --i, ++j)
	{
		if (board[i][j] == 'Q')
			return false;
	}
	//判断左上方
	for (int i = row - 1, j = col - 1;
	i >= 0 && j >= 0; --i, --j)
	{
		if (board[i][j] == 'Q')
			return false;
	}
	return true;
}
void backTrack(vector<string>& board, int row)
{
	if (row == board.size())
	{
		res.push_back(board);
		return;
	}
	if (res.size() >0 )
	{
		return;
	}
	int n = board[row].size();
	for (int col = 0; col < n; ++col)
	{
		if (!isValid(board, row, col))
		{
			continue;
		}
		board[row][col] = 'Q';
		backTrack(board, row + 1);
		board[row][col] = '-';
	}
}

void solveQueens(int n)
{
	vector<string> board(n, string(n, '-'));
	backTrack(board, 0);

	for (auto res1 : res)
	{
		for (string row : res1)
		{
			cout << row.c_str()<<endl;
		}
		cout << "----------------------" << endl;
	}
	
}