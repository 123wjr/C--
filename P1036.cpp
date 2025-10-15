#include <iostream>
unsigned num[20];
int n, k, ans;
int pos[20];
bool is_prime(unsigned tar)
{
	if (tar == 2 || tar == 3)
	{
		return true;
	}
	else if (tar == 1)
	{
		return false;
	}
	if (tar % 6 != 5 && tar % 6 != 1)
	{
		return false;
	}
	for (int i = 2; i * i <= tar; i++)
	{
		if (tar % i == 0)
		{
			return false;
		}
	}
	return true;
}

void sum_acc()
{
	unsigned sum = 0;
	for (int i = 0; i < k; i++)
	{
		sum += num[pos[i]];
	}
	if (is_prime(sum))
	{
		ans++;
	}
}

void cho()
{
	for (int i = 0; i < k; i++)
	{
		pos[i] = i;
	}
	sum_acc();
	int i = k - 1;
	while (true)
	{
		if (pos[i] == n - k + i)
		{
			if (i == 0)
			{
				break;
			}
			int digit=0;
			while (pos[i-1] == n - k + i-1)
			{
				i--;
				digit++;
			}
			pos[i] = pos[i - 1] + 2;
			for (int j=1; j<=digit; j++) {
				pos[i+j]=pos[i+j-1]+1;
			}
			i--;
			continue;
		}
		pos[i]++;
		if (i < k - 1)
		{
			i = k - 1;
		}
		sum_acc();
	}
	return;
}

int main()
{
	std::cin >> n >> k;
	for (int i = 0; i < n; i++)
	{
		std::cin >> num[i];
	}
	cho();
	std::cout << ans;
}