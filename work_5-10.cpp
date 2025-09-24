
#include <cstdio>
int ans[201];
int main(){
	int N;
	char a[40000];
	for (int i=0; i<201; i++) {
		char tem;
		scanf("%c",&tem);
		if (tem == '\n') {
			N=i;
			ans[0]=N;
			break;
		}else {
			a[i]=tem;
		}
	}
	for (int i=N; i<N*N; i++) {
		char tem;
		scanf("%c",&tem);
		if (tem == '\n') {
			i--;
			continue;
		}
		a[i]=tem;
	}
	char state='0';
	int j=1;
	for (int i=0; i<N*N; i++) {
		if (a[i]==state) {
			ans[j]++;
		}else {
			j++;
			ans[j]++; // 切换的头一位要记录在累计中
			if (state=='1') {
				state='0';
			}else {
				state='1';
			}
		}
	}
	printf("%d ",ans[0]);
	for (int i=1; i<=j; i++) {
		printf("%d ",ans[i]);
	}
	return 0;
}