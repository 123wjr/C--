#include <cstdio>
int main(){
	int L,m,u,v,sum=0;
	scanf("%d",&L);
	int a[10010]={0}; // int a[L]={0};
	for (int j=1; j<=m; j++) {
		scanf("%d %d",&u,&v);
		for (int k=u; k<=v; k++) {
			a[k]=1;
		}
	}
	for (int i=0; i<=L; i++) {
		if (a[i]!=1) {
			sum++;
		}
	}
	printf("%d",sum);
	return 0;
}