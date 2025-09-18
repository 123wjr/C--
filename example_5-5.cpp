/* 
暴露的问题：
1、break（停止循环）与continue（下一循环）傻傻分不清
*/
#include <cstdio>
#include <cstdlib>

int main(){
	int N, sum=0;
	scanf("%d",&N);
	int a[3][N];
	for (int i=0; i<N; i++) {
		scanf("%d %d %d",&a[0][i],&a[1][i],&a[2][i]);
		for (int j=i-1; j>=0; j--) {
			if (abs(a[0][i]+a[1][i]+a[2][i]-a[0][j]-a[1][j]-a[2][j])>10) {
				continue;
			}
			if (abs(a[0][i]-a[0][j]) <= 5 &&
				abs(a[1][i]-a[1][j]) <= 5 &&
				abs(a[2][i]-a[2][j]) <= 5) {
				sum+=1;
			}
		}
	}
	printf("%d",sum);
	return 0;
}