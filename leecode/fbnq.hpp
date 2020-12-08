#include <vector>
int fb(int n)
{
	if (n == 0) return 0;
	if (n == 1 || n == 2) return 1;
	return fb(n - 1) + fb(n - 2);
}



int fb_1_helper(std::vector<int>& mem, int n)
{
	if (n == 0) return 0;
	if (n == 1 || n == 2) return 1;
	if (mem[n] != 0) return mem[n];
	mem[n] = fb_1_helper(mem, n - 1) + fb_1_helper(mem, n - 2);
	return mem[n];

}
int fb_1(int n)
{
	if (n == 0) return 0;
	std::vector<int> fb_mem(n+1,0);
	return fb_1_helper(fb_mem, n);
}
int fb_2(int n)
{
	if (n == 0) return 0;
	if (n == 1 || n == 2) return 1;
	std::vector<int> mem(n + 1, 0);
	mem[1] = mem[2] = 1;
	for (int i = 3; i <= n; i++)
	{
		mem[i] = mem[i - 1] + mem[i - 2];
	}
	return mem[n];
}