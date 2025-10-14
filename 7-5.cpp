#include <cstdio>
int o[6][6];
bool same;
int small = 0, big = 0;

int judge_same(int i, int j)
{
	if ((i < 8 && j > 8) || (j < 8 && i > 8))
	{
		same = false;
		return 0;
	}
	else
	{
		same = true;
		return 1;
	}
}

void judge_range(int i)
{
	if (i < 8)
	{
		small++;
	}
	else if (i > 8)
	{
		big++;
	}
}

int main()
{
	int T;
	scanf("%d", &T);
	while (T--)
	{
		int ans = 0;
		scanf("%d", &o[1][1]);
		scanf("%d %d", &o[2][1], &o[2][2]);
		scanf("%d %d %d", &o[3][1], &o[3][2], &o[3][3]);
		scanf("%d %d %d %d", &o[4][1], &o[4][2], &o[4][3], &o[4][4]);
		scanf("%d %d %d %d %d", &o[5][1], &o[5][2], &o[5][3], &o[5][4],
			  &o[5][5]);
		
		if (o[3][2] != 8)
		{
			ans++;
			for (int i = 1; i <= 5; i++)
			{
				for (int j = 1; j <= 5; j++)
				{
					if (o[i][j] == 8)
					o[i][j] = o[3][2];
				}
			}
			o[3][2] = 8;
		}
		judge_same(o[1][1], o[5][3]);
		judge_range(o[2][1]);
		judge_range(o[4][1]);
		judge_range(o[5][2]);
		judge_range(o[3][3]);
		judge_range(o[4][3]);
		judge_range(o[5][5]);
		if (big > small)
		{
			ans += small;
			ans += ((same && o[5][3] < 8) ? 1 : 0);
		}
		else if (big == small)
		{
			ans += 3;
		}
		else
		{
			ans += big;
			ans += ((same && o[5][3] > 8) ? 1 : 0);
		}
		printf("%d", ans);
		small = 0;
		big = 0;
	}
}