#include <cstdio>
int a[21][10];
int b[21];
int c[10];
int main(){
	int n,max=0;
	long long tem=0;
	scanf("%d",&n);
	for (int i=0; i<n; i++) {
		int j=-1;
		scanf("%lld",&tem);
		while (tem) {
			a[i][j]=tem%10;
			tem/=10;
			j++;
		}	
		b[i]=j;
	}
	for (int i=9; i>=0; i--) {
		for (int j=0; j<21; j++) {
			if (b[j]<i) {
				continue;
			}else {
				if (a[j][i]>c[i]) {
					c[i]=j;
				}
			}	
		}
		i-=b[c[i]];
	}
	
}