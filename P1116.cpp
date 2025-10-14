#include <iostream>
#include <utility>
#include <vector>
std::vector<int> train;

int main()
{
	int n, ans = 0;
	std::cin >> n;
	while (n--)
	{
		int tem;
		std::cin >> tem;
		train.push_back(tem);
	}
	int flag = 0;
	while (flag < train.size() - 1)
	{
		flag = 0;
		for (int i = 0; i < train.size() - 1; i++)
		{
			if (train[i] < train[i + 1])
			{
				flag++;
				continue;
			}
			else
			{
				ans++;
				flag = false;
				std::swap(train[i], train[i + 1]);
			}
		}
	}
	std::cout << ans;
	return 0;
}