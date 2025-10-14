#include <algorithm>
#include <ios>
#include <iostream>
#include <string>
struct candidate
{
	std::string num;
	int index;
}p[20];

bool comp(candidate i, candidate j)
{
	if (i.num.length() != j.num.length())
	{
		return i.num.length() > j.num.length();
	}
	else
	{
		int k=0;
		while (i.num[k]==j.num[k]) {
			k++;
		}
		return i.num[k] > j.num[k];
	}
}

int main()
{
	int m;
	std::ios::sync_with_stdio(false);
	std::cin.tie(nullptr);
	std::cout.tie(nullptr);
	std::cin >> m;
	for (int i=0; i<m; i++) {
		p[i].index = i+1;
		std::cin >> p[i].num;
	}
	std::sort(p, p + m, comp);
	std::cout << p[0].index << "\n" << p[0].num;
	return 0;
}