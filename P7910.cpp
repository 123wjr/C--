#include <algorithm>
#include <cstdio>
#include <cstdlib>
struct list
{
	int value;
	int index;
} a[8001], b[8001];

int n, q;

void change()
{
	int x, v;
	scanf("%d %d", &x, &v);
	a[x].value = v;
}

bool camp(list i, list j)
{
	if (i.value != j.value)
	{
		return i.value < j.value;
	}
	return i.index < j.index;
}

void sort_find()
{
	int tem;
	scanf("%d", &tem);
	for (int i = 1; i <= n; i++)
	{
		b[i] = a[i];
	}
	std::sort(b + 1, b + n + 1, camp);
	printf("%d\n", b[tem].index);
}

int main()
{
	scanf("%d %d", &n, &q);
	for (int i = 1; i <= n; i++)
	{
		scanf("%d", &a[i].value);
		a[i].index = i;
	}
	for (int i = 1; i <= q; i++)
	{
		int tem;
		scanf("%d", &tem);
		switch (tem)
		{
		case 1: change(); break;
		case 2: sort_find(); break;
		}
	}
}