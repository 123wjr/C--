#include <algorithm>
#include <ios>
#include <iostream>
#include <vector>
std::vector<long long> cow;

int main()
{
	std::ios::sync_with_stdio(false);
	std::cin.tie(nullptr);
	std::cout.tie(nullptr);
	int N;
	long long B;
	std::cin >> N >> B;
	while (N--)
	{
		long long tem;
		std::cin >> tem;
		cow.push_back(tem);
	}
	std::sort(cow.begin(), cow.end(),
			  [](long long x, long long y) { return x > y; });
	long long judge=0;
	int ans = 0;
	int i=0;
	while (judge < B)
	{
		judge += cow[i++];
		ans++;
	}
	std::cout << ans;
	return 0;
}