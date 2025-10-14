#include <iostream>
#include <set>
std::set<int> a;
int main()
{
	int N;
	std::cin >> N;
	while (N--) {
		int tem;
		std::cin >> tem;
		a.insert(tem);
	}
	std::cout << a.size() << "\n";
	for (auto x : a) {
		std::cout << x << ' ';
	}
}