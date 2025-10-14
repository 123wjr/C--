#include <cstdio>
int main()
{
	int m, n, k, tem, wins = 0, acc = 0;
	scanf("%d %d %d", &n, &m, &k);
	for (int i=0; i<n; i++) {
		scanf("%d", &tem);
		wins += tem;
		acc=(tem==1)?acc+1:0;
	}
	if (acc>=k) {
		wins += ((m % (k + 1) == 0) ? 0 : m % (k + 1) - 1) + (m / (k + 1)) * k;
	}else if (acc==wins && wins!=0) {
		wins = ((n + m) % (k + 1) == 0)
				   ? (n + m) / (k + 1) * k
				   : (n + m) % (k + 1) + ((n + m) / (k + 1)) * k;
	}else {
		wins += (((m + acc) % (k + 1) == 0) ? 0 : (m + acc) % (k + 1)) +
				((m + acc) / (k + 1)) * k - acc;
	}
	printf("%d", wins);
	return 0;
}