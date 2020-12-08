// leecode.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include "ChipMoney.hpp"
#include "backtrack.hpp"
#include "solveQueens.hpp"
#include "openLock.hpp"
#include "fbnq.hpp"
#include <iostream>
#include <vector>
#include <list>
using namespace std;
int main()
{
	/*凑零钱问题********************************************/
	/*int coins[3] = { 1,2,5 };
	cout << "min start'"<< endl;
	int amount = 1564;
	vector<int> mem(amount+1, 0);
	int min=coinChange(coins, 3, amount,mem);
	cout << "min 1:" << min << endl;
	int min2 = coinChange2(coins, 3, amount);
	cout << "min 2:" << min2 << endl;
	cin.get();*/

	/*全排列问题*********************************************/
	//int nums[] = { 1,2,3,4 };
	//list<int> track;
	//backtrack(nums, 4, track);

	/*N皇后问题**********************************************/
	//solveQueens(5);

	/*密码锁问题**********************************************/
	/*
	有一个四位的密码锁，初始是 0000 ,密码是xxxx,调整到正确密码的最小步数
	如果有锁死组合，碰到锁死组合密码锁会死锁该怎么处理
	*/
	/*int step=openLock("0000", "2019");
	cout << "min step:" << step << endl;
	cin.get();*/

	cout << "fb result:" << fb_1(5) << endl;
	cin.get();
    return 0;
}

