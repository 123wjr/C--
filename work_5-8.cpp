#include <cstdio>
#include <cstring>
int main(){
	int n,m,k;
	scanf("%d %d %d",&n,&m,&k);
	int light[n+4][n+4];
	memset(light, 0, sizeof(light));
	for (int i=1; i<=m; i++) {
		int x,y;
		scanf("%d %d",&x,&y);
		x-=1;
		y-=1;
		for (int j=-2; j<=2; j++) {
			light[x+2-j][y+2]=1;
			light[x+2][y+2+j]=1;
		}
		for (int j=-1; j<=1; j++) {
			light[x+2+j][y+2+j]=1;
			light[x+2+j][y+2-j]=1;
		}
	}
	if (k!=0) {
		for (int i=1; i<=k; i++) {
			int x,y;
			scanf("%d %d",&x,&y);
			x-=1;
			y-=1;
			for (int j=-2; j<=2; j++) {
				for (int k=-2; k<=2; k++) {
					light[x+2+j][y+2+k]=1;
				}
			}
		}
	}
	int ans=0;
	for (int i=2; i<n+2; i++) {
		for (int j=2; j<n+2; j++) {
			if (light[i][j]==0) ans++;
		}
	}
	printf("%d\n",ans);
	return 0;
}