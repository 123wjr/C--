// P5461
#include <cstdio>
int a[1024][1024];

void init(int num, int size, int x_s=0, int y_s=0){
	for (int i=x_s; i<x_s+size; i++) {
		for (int j=y_s; j<y_s+size; j++) {
			a[i][j]=num;
		}
	}
}

void cal(int size,int x, int y){
	if (size>=1) {
		init(0, size>>1,x,y);
		cal(size>>1, (size>>1)+x, y);
		cal(size>>1, (size>>1)+x, (size>>1)+y);
		cal(size>>1, x, (size>>1)+y);
	}
}

int main(){
	int n;
	scanf("%d",&n);
	n = 1 << n;
	init(1,n);
	cal(n, 0, 0);
	for (int i=0; i<n; i++) {
		for (int j=0; j<n; j++) {
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
	return 0;
}