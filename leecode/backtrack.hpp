#include <list>
using namespace std;

list<list<int> > result;
bool contains(const list<int>& track, int num)
{
	for (int n: track) {
		if (n == num) {
			return true;
		}
	}
	return false;
}
void backtrack(int nums[], int numsLen, list<int>& track)
{
	if (track.size() == numsLen) {
		result.push_back(track);
		return;
	}
 	for (int i = 0; i < numsLen; ++i)
	{
		if (contains(track, nums[i]))
		{
			continue;
		}
		track.push_back(nums[i]);
		backtrack(nums, numsLen, track);
		track.pop_back();
	}
}