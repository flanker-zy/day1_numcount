#include<iostream>
using namespace std;

void function(int nums[], int target, int result[])
{
	int i, j;
	int status = 0;
	for (i = 0; i < sizeof(nums); i++)
	{
		if (status == 0)
		{
			for (j = i + 1; j < sizeof(nums); j++)
			{
				if (nums[i] + nums[j] == target)
				{
					result[0] = i;
					result[1] = j;
					status = 1;
				}
				else if (nums[i] + nums[j] > target)
					break;
				else continue;
			}
		}
		else break;
	}
	if (status == 0)
	{
		cout << "数组中不存在可组成目标值的两数字" << endl;
	}
	else if (status = 1)
	{
		cout << "两数下标分别为：" << result[0] << " " << result[1] << endl;
	}
	else {
		cout << "程序出错" << endl;
	}
}

int main()
{
	int nums[4] = { 2,7,11,13 };
	int target = 15;
	int result[2] = { 0 };
	function(nums, target, result);
	return 0;
}