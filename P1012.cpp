#include <cstdio>
int a[21][10]; //存数各位数字
int b[21]; //存数的位数
int c[10]; //确定哪一位是采用谁
int judge[21]; //判断数是否已经被采用
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
			if (judge[j]==1) { // 判断第j个数的位数是否出现过
				continue;
			}else {
				if (a[j][b[j]]>c[i]) {
					c[i]=j;
				}
			}	
		}
		judge[c[i]]=1;
		i-=b[c[i]];
	}
	
}