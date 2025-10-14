#include <cstdio>
long long x[10005], y[10005], r[10005];
int main()
{
	long long n, q;
	long long px, py;
	// 输入圆
	scanf("%lld %lld", &n, &q);
	for (int i = 0; i < n; i++)
	{
		scanf("%lld %lld %lld", &x[i], &y[i], &r[i]);
	}
	// 输入直线与判断
	for (int i = 0; i < q; i++) // for lines
	{
		scanf("%lld %lld", &px, &py); // 输入
		// judge
		long long delta = -1;
		for (int j = 0; j < n; j++) // 对每一个圆
		{
			delta = r[j] * r[j] * (px * px + py * py) - //i,j循环易错
					(x[j] * py - px * y[j]) * (x[j] * py - px * y[j]);
			if (delta >= 0)
			{
				break;
			}
		}
		printf("%s\n", (delta >= 0) ? "No" : "Yes");
	}
	return 0;

}