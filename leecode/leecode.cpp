// leecode.cpp : �������̨Ӧ�ó������ڵ㡣
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
	/*����Ǯ����********************************************/
	/*int coins[3] = { 1,2,5 };
	cout << "min start'"<< endl;
	int amount = 1564;
	vector<int> mem(amount+1, 0);
	int min=coinChange(coins, 3, amount,mem);
	cout << "min 1:" << min << endl;
	int min2 = coinChange2(coins, 3, amount);
	cout << "min 2:" << min2 << endl;
	cin.get();*/

	/*ȫ��������*********************************************/
	//int nums[] = { 1,2,3,4 };
	//list<int> track;
	//backtrack(nums, 4, track);

	/*N�ʺ�����**********************************************/
	//solveQueens(5);

	/*����������**********************************************/
	/*
	��һ����λ������������ʼ�� 0000 ,������xxxx,��������ȷ�������С����
	�����������ϣ����������������������������ô����
	*/
	/*int step=openLock("0000", "2019");
	cout << "min step:" << step << endl;
	cin.get();*/

	cout << "fb result:" << fb_1(5) << endl;
	cin.get();
    return 0;
}

