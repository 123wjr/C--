#include <cstdio>
#include <cstring>
int main(){
    int N;
    scanf("%d",&N);
    int a[N+1][N+1];
	memset(a, 0, sizeof(a)); // 这边不初始化会导致下面未定义错误。
    a[0][N/2]=1;
    for (int K=2; K<=N*N; K++) {
		//1.
        for (int i=0; i<N-1; i++) {
			if (a[0][i]==K-1) {
				a[N-1][i+1]=K;
			}
        }
		//2.
        for (int i=1; i<=N-1; i++) {
			if (a[i][N-1]==K-1) {
				a[i-1][0]=K;
			}
		}
		//3.
		if (a[0][N-1]==K-1) {
			a[1][N-1]=K;
		}
		//4.
		for (int i=1; i<N; i++) {
			for (int j=0; j<N-1; j++) {
				if (a[i][j]==K-1) {
					if (a[i-1][j+1]==0) { //此处本写错，考虑不周，a[i-1][j+1]是未定义的
						a[i-1][j+1]+=K;
					}else {
						a[i+1][j]+=K;
					}
				}
			}
		}
    }
	for (int i=0; i<N; i++) {
		for (int j=0; j<N; j++) {
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
	return 0;
}