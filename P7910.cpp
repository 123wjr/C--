#include <algorithm>
#include <cstdio>
#include <cstdlib>
#include <utility>
struct list
{
	int value;
	int index;
} a[8001];
int c[8001];
int n, q;

void range_bubble_sort(bool from_start, int pos)
{
	if (from_start)
	{
		int start = 1;
		for (int i = 1; i < c[pos]; i++)
		{
			if (a[i].value > a[c[pos]].value ||
				(a[i].value == a[c[pos]].value && a[i].index > pos))
			{
				start = i;
				break;
			};
		}
		for (int i = c[pos]; i > start; i--)
		{
			std::swap(a[i], a[i - 1]);
			std::swap(c[a[i].index], c[a[i - 1].index]);
		}
	}
	else
	{
		int end = n;
		for (int i = c[pos] + 1; i <= n; i++)
		{
			if (a[i].value > a[c[pos]].value ||
				(a[i].value == a[c[pos]].value && a[i].index > pos))
			{
				end = i - 1;
				break;
			};
		}
		for (int i = c[pos]; i < end; i++)
		{
			std::swap(a[i], a[i + 1]);
			std::swap(c[a[i].index], c[a[i + 1].index]);
		}
	}
}

void change_sort()
{
	int x, v;
	scanf("%d %d", &x, &v);
	a[c[x]].value = v;
	if (v < a[c[x] - 1].value)
	{
		range_bubble_sort(true, x);
	}
	else if (v == a[c[x] - 1].value)
	{
		if (a[c[x]].index < a[c[x] - 1].index)
		{
			std::swap(a[c[x]], a[c[x] - 1]);
			std::swap(c[a[c[x]].index], c[a[c[x] - 1].index]);
		}
	}
	else if (v < a[c[x] + 1].value)
	{
		return;
	}
	else if (v == a[c[x] + 1].value)
	{
		if (a[c[x]].index > a[c[x] + 1].index)
		{
			std::swap(a[c[x]], a[c[x] + 1]);
			std::swap(c[a[c[x]].index], c[a[c[x] + 1].index]);
		}
	}
	else
	{
		range_bubble_sort(false, x);
	}
}

bool comp(list i, list j)
{
	if (i.value != j.value)
	{
		return i.value < j.value;
	}
	return i.index < j.index;
}

void find_ori()
{
	int tem;
	scanf("%d", &tem);
	printf("%d\n", c[tem]);
}

int main()
{
	scanf("%d %d", &n, &q);
	for (int i = 1; i <= n; i++)
	{
		scanf("%d", &a[i].value);
		a[i].index = i;
	}
	std::sort(a + 1, a + n + 1, comp);
	for (int i = 1; i <= n; i++)
	{
		c[a[i].index] = i;
	}
	for (int i = 1; i <= q; i++)
	{
		int tem;
		scanf("%d", &tem);
		switch (tem)
		{
		case 1: change_sort(); break;
		case 2: find_ori(); break;
		}
	}
}