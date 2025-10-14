#include <algorithm>
#include <ios>
#include <iostream>
struct grade
{
	int all, ch, ma, en, index;
	void sum() { all = ch + ma + en; }
} a[301];

bool comp(const grade &i, const grade &j)
{
	if (i.all != j.all)
	{
		return i.all>j.all;
	}else if (i.ch!=j.ch) {
		return i.ch>j.ch;
	}else {
		return i.index<j.index;
	}
}

int main()
{
	std::ios::sync_with_stdio(false);
	std::cin.tie(nullptr);
	std::cout.tie(nullptr);
	int n;
	std::cin >> n;
	for (int i = 1; i <= n; i++)
	{
		std::cin >> a[i].ch >> a[i].ma >> a[i].en;
		a[i].index=i;
		a[i].sum();
	}
	std::sort(a, a + n+1, comp);
	std::cout << a[0].index << " " << a[0].all << "\n";
	std::cout << a[1].index << " " << a[1].all << "\n";
	std::cout << a[2].index << " " << a[2].all << "\n";
	std::cout << a[3].index << " " << a[3].all << "\n";
	std::cout << a[4].index << " " << a[4].all;
}