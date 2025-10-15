#include <iostream>
struct num
{
	int digit[3];
	int num;
	void num2digit()
	{
		digit[0] = num / 100;
		digit[1] = num / 10 % 10;
		digit[2] = num % 10;
	}
	void digit2num(int i, int j, int k)
	{
		digit[0] = i;
		digit[1] = j;
		digit[2] = k;
		num = 100 * digit[0] + 10 * digit[1] + digit[2];
	}
} a, b, c, lim_a;
int digits[9];
bool digit_judge()
{
	digits[0] = a.digit[0];
	digits[1] = a.digit[1];
	digits[2] = a.digit[2];
	digits[3] = b.digit[0];
	digits[4] = b.digit[1];
	digits[5] = b.digit[2];
	digits[6] = c.digit[0];
	digits[7] = c.digit[1];
	digits[8] = c.digit[2];
	bool judge = true;
	for (int i = 0; i < 9 && judge == true; i++)
	{
		for (int j = i + 1; j < 9 && judge == true; j++)
		{
			if (digits[i] == digits[j] || digits[i] == 0)
			{
				judge = false;
			}
		}
	}
	return judge;
}
int main()
{
	int A, B, C, ans = 0;
	std::cin >> A >> B >> C;
	lim_a.num = 1000 / C * A;
	lim_a.num2digit();
	for (int i = 1; i <= lim_a.digit[0]; i++)
	{
		for (int j = 1; j <= ((i == lim_a.digit[0]) ? lim_a.digit[1] : 9); j++)
		{
			if (j == i)
			{
				continue;
			}
			for (int k = 1; k <= ((i == lim_a.digit[0] && j == lim_a.digit[1])
									  ? lim_a.digit[2]
									  : 9);
				 k++)
			{
				if (k == j || k == i)
				{
					continue;
				}
				a.digit2num(i, j, k);
				if (a.num * B % A == 0 && a.num * C % A == 0)
				{
					b.num = a.num * B / A;
					c.num = a.num * C / A;
					b.num2digit();
					c.num2digit();
					if (digit_judge())
					{
						ans++;
						std::cout << a.num << " " << b.num << " " << c.num
								  << "\n";
					}
				}
			}
		}
	}
	if (ans == 0)
	{
		std::cout << "No!!!";
	}
}