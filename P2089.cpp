#include <cstdio>
#include <ios>
#include <iostream>
#include <string>

int n, ans = 0;
int a[11] = {0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
std::string str;
bool suma()
{
	int sum =
		a[10] + a[1] + a[2] + a[3] + a[4] + a[5] + a[6] + a[7] + a[8] + a[9];

	if (sum == n)
	{
		return true;
	}
	return false;
};

void judge_print()
{
	if (suma())
	{
		ans++;
		char tem[20];
		sprintf(tem, "%d %d %d %d %d %d %d %d %d %d", a[1], a[2], a[3], a[4],
				a[5], a[6], a[7], a[8], a[9], a[10]);
		str += tem;
		str += '\n';
	};
};

int i = 10;
void circle(int loop = 10)
{
	if (loop == 0)
	{
		return;
	}
	if (a[loop] < 3)
	{
		a[loop]++;
		judge_print();
		circle(10);
	}
	else
	{
		a[loop] = 1;
		circle(loop - 1);
	}
}

int main()
{
	std::ios::sync_with_stdio(false);
	std::cin.tie(nullptr);
	std::cout.tie(nullptr);
	std::cin >> n;
	if (n > 30 || n < 10)
	{
		std::cout << 0;
		return 0;
	}
	circle();
	std::cout << ans << "\n" << str;
}