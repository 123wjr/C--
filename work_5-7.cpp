#include <cstdio>
#include <cstring>
int main(){
	int n;
	scanf("%d",&n);
	int a[n][n+2];
	memset(a, 0, sizeof(a));
	a[0][1]=1;
	for (int i=1; i<n; i++) {
		for (int j=1; j<=i+1; j++) {
			a[i][j]=a[i-1][j]+a[i-1][j-1];
		}
	}
	for (int i=0; i<n; i++) {
		for (int j=1; j<i+2; j++) {
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
}