#include <ios>
#include <iostream>

bool is_prime(int tar)
{
	if (tar == 1)
	{
		return false;
	}
	else if (tar == 2 || tar == 3)
	{
		return true;
	}
	else if (tar % 6 != 5 && tar % 6 != 1)
	{
		return false;
	}
	else
	{
		for (int i = 2; i * i <= tar; i++)
		{
			if (tar % i == 0)
			{
				return false;
			}
		}
	}
	return true;
}

int main()
{
	std::ios::sync_with_stdio(false);
	std::cin.tie(nullptr);
	std::cout.tie(nullptr);
	int n;
	std::cin >> n;
	while (n--)
	{
		int tem;
		std::cin >> tem;
		if (is_prime(tem))
		{
			std::cout << tem << " ";
		}
	}
	std::cout << std::endl;
}