#include <algorithm>
#include <ios>
#include <iostream>
#include <vector>
int main()
{
	std::ios::sync_with_stdio(false);
	std::cin.tie(0);
	std::cout.tie(0);
	int n, m;
	std::cin >> n >> m;
	std::vector<int> a;
	for (int i=0; i<m; i++) {
		int tem;
		std::cin >> tem;
		a.push_back(tem);
	}
	std::sort(a.begin(), a.end());
	for (auto x : a) {
		std::cout << x << ' ';
	}
	
	return 0;
}