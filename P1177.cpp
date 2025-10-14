#include <algorithm>
#include <iostream>
#include <vector>
int main()
{
	int N;
	std::cin >> N;
	std::vector<int> a;
	while (N--) {
		int tem;
		std::cin >> tem;
		a.push_back(tem);
	}
	std::sort(a.begin(), a.end());
	for (int i=0; i<a.size()-1; i++) {
		std::cout << a[i] << ' ';
	}
	std::cout << a[a.size()-1] << std::endl;
}