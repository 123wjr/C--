/*
最大的问题：越界
原因：坐标为正整数，数组为自然数，存在边缘的越界
*/
#include <cstdio>
#include <cstring>
int main(){
	int n,m;
	scanf("%d %d",&n,&m);
	int a[n+1][n+1]; //原来用a[n][n]对于大于n-1的值会出问题
	memset(a, 0, sizeof(a));
	for (int i=1; i<=m; i++) { //原来这里用i=0，i<m，但是坐标不包含零，导致越界
		int x1,x2,y1,y2;
		scanf("%d %d %d %d",&x1,&y1,&x2,&y2);
		for (int j=x1; j<=x2; j++) { //这里会与上面的i=0，i<m矛盾产生越界问题
			for (int k=y1; k<=y2; k++) {
				a[j][k]+=1;
			}
		}
	}
	for (int i=1; i<=n; i++) { //原来这里用i=0，i<n，但是坐标不包含零，导致越界
		for (int j=1; j<=n; j++) {
			printf("%d ",a[i][j]);
		}
		printf("\n"); 
	}
	return 0;
}