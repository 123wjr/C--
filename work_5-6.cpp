#include <cstdio>
#include <cstring>
int main(){
	int n,line,row;
	scanf("%d",&n);
	int a[n+2][n+2];
	memset(a, 0, sizeof(a));
	a[1][1]=1;
	line=1;
	row=2;
	for (int i=2; i<=n*n; i++) {
		bool right = a[line][row+1];
		bool down = a[line+1][row];
		bool left = a[line][row-1];
		bool up = a[line-1][row];

		if (0==right && 0==down && row!=n) {
			a[line][row]=i;
			row+=1;
			continue;
		}
		//右上角
		if ((line==1&&row==n)||(right && left && up)) {
			a[line][row]=i;
			line+=1;
			continue;
		}
		if (0==left && 0==down && line!=n) {
			a[line][row]=i;
			line+=1;
			continue;
		}
		//右下角
		if ((line==n&&row==n)||(right && down && up)) {
			a[line][row]=i;
			row-=1;
			continue;
		}
		if (0==left && 0==up && row!=1) {
			a[line][row]=i;
			row-=1;
			continue;
		}
		//左下角
		if ((line==n&&row==1)||(right && down && left)) {
			a[line][row]=i;
			line-=1;
			continue;
		}
		if (0==right && 0==up) {
			a[line][row]=i;
			line-=1;
			continue;
		}
		if (up && down && (row==1 || left)) {
			a[line][row]=i;
			row+=1;
			continue;
		}
	}
	for (int i=1; i<=n; i++) {
		for (int j=1; j<=n; j++) {
			if (a[i][j]>9) printf(" %d",a[i][j]);
			else printf("  %d",a[i][j]);
		}
		printf("\n");
	}
}