#include <algorithm>
#include <ios>
#include <iostream>
int main()
{
	std::ios::sync_with_stdio(false);
	std::cin.tie(nullptr);
	std::cout.tie(nullptr);
	int n, m;
	long long rec = 0;
	long long squ = 0;
	std::cin >> n >> m;
	for (int i=1; i<=n; i++) {
		for (int j=1; j<=m; j++) {
			rec += (m + 1 - j) * (n + 1 - i)-1;
			long long tem = std::min(m-j,n-i);
			rec -= tem;
			squ += tem;
		}
	}
	std::cout << squ + m*n << " " << rec;
	return 0;
}