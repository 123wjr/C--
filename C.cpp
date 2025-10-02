// C
#include <cstdio>
int main(){
	unsigned num,n,m,x1,x2,y1,y2;
	scanf("%d",&num);
	for (int i=0; i<num; i++) {
		scanf("%d %d",&n,&m);
		scanf("%d%d%d%d",&x1,&y1,&x2,&y2);
		printf("%d\n",
			(1<x1&&x1<n&&1<x2&&x2<n&&1<y1&&y1<m&&1<y2&&y2<m)?4:
			((x1==1||x1==n)&&(y1==1||y1==m)||(x2==1||x2==n)&&(y2==1||y2==m))?2:3);
		// (((x1==1||x1==n)&&(y1==1||y1==m))||((x2==1||x2==n)&&(y2==1||y2==m)))?2:
		// ((x1==1||x1==n)||(x2==1||x2==n)||(y1==1||y1==m)||(y2==1||y2==m))?3:4);
	}
	return 0;
}