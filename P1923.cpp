#include <iostream>
#include <iterator>
#include <set>
std::set<int> a;
int main()
{
	std::ios::sync_with_stdio(false);
	std::cin.tie(nullptr);
	std::cout.tie(nullptr);
	int n, k;
	std::cin >> n >> k;
	while (n--)
	{
		int tem;
		std::cin >> tem;
		a.insert(tem);
	}
	auto it = std::next(a.begin(), k);
	std::cout << *it;
}