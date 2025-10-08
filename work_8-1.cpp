// P4924
#include <cstdio>
#include <cstring>
int ori[500][500],tem[500][500];
int n,m,x,y,r,z;

int main(){
	int fill=1;
	scanf("%d %d",&n,&m);
	for (int i=0; i<n; i++) {
		for (int j=0; j<n; j++) {
			ori[i][j]=fill++;
		}
	}
	for (int i=0; i<m; i++) {
		memset(tem, 0, sizeof(tem));
		scanf("%d%d%d%d",&x,&y,&r,&z);
		if (z) {
			for (int i_ori=x-1-r, j=0;i_ori<=x-1+r; i_ori++,j++) {
				for (int j_ori=y-1-r, i=2*r; j_ori<=y-1+r; j_ori++,i--) {
					tem[i][j]=ori[i_ori][j_ori];
				}
			}
		}else {
			for (int j_ori=y-1-r, i=0; j_ori<=y-1+r; j_ori++,i++) {
				for (int i_ori=x-1-r, j=2*r; i_ori<=x-1+r; i_ori++,j--) {
					tem[i][j]=ori[i_ori][j_ori];
				}
			}
		}
		for (int i_ori=x-1-r, i=0;i_ori<=x-1+r; i_ori++,i++) {
			for (int j_ori=y-1-r, j=0; j_ori<=y-1+r; j_ori++,j++) {
				ori[i_ori][j_ori]=tem[i][j];
			}
		}
	}
	for (int i=0; i<n; i++) {
		for (int j=0; j<n; j++) {
			printf("%d ",ori[i][j]);
		}
	printf("\n");
	}
	return 0;
}