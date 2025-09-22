#include <cstdio>
#include <cstring>

int a[101],b[101];

int main(){
	int n,ans=0;
	scanf("%d",&n);
	for (int i=0; i<n; i++) {
		scanf("%d",&a[i]);
	}
	// for (int i=1; i<n-1; i++) {
	// 	for (int j=0; j<i; j++) {
	// 		for (int k=i; k<n ; k++) {
	// 			if (a[i]+a[j]==a[k] && (a[i]!=a[j])) {
	// 				b[k]=1;
	// 			}
	// 		}
	// 	}
	// }
	// 未考虑加数的位置
	for (int i=0; i<n; i++) {
		for (int j=0; j<n; j++) {
			for (int k=0; k<n; k++) {
				if (a[i]+a[j]==a[k] && i!=j) {
					b[k]=1; //原来这里用了累加，但是其实需要做的只是判断存在，故直接设值
				}
			}
		}
	}
	for (int i=0; i<n; i++) {
		ans+=b[i];
	}
	printf("%d",ans);
	return 0;
}