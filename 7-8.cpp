#include <cstdio>
int a[500000], b[500000];
int ans;
int main()
{
	int n;
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &a[i]);
	}
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &b[i]);
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if ((a[i] + a[j]) % (b[i] + b[j]) == 0)
			{
				ans++;
			}
		}
	}
	printf("%d", ans);
}