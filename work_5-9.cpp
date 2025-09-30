//P1319
#include <cstdio>
int ans[40000]; // 预留足够的空间，不是长度！是面积！
int main(){
	int N,sum=0;
	bool state=0;
	scanf("%d",&N);
	while (sum<N*N) {
		int tem;
		scanf("%d",&tem);
		for (int i=sum; i<tem+sum; i++) {
			ans[i]=state;
		}
		if (state==0) {
			state=1;
		}else {
			state=0;
		}
		sum+=tem;
	}
	for (int i=0; i<N; i++) { // 不能for (int i=0; i<sum; i++)，以行列为循环
		for (int j=0; j<N; j++) {
			printf("%d",ans[i*N+j]);
		}
		printf("\n");
	}
	return 0;
}