#include <cstdio>
#include <cstring>

int a[101],b[101];

int main(){
	int n,ans=0;
	scanf("%d",&n);
	for (int i=0; i<n; i++) {
		scanf("%d",&a[i]);
	}
	for (int i=1; i<n-1; i++) {
		for (int j=0; j<i; j++) {
			for (int k=i; k<n ; k++) {
				if (a[i]+a[j]==a[k]) {
					ans++;
					b[k]++;
				}
			}
		}
	}
	for (int i=0; i<n; i++) {
		if (b[i]>=2) {
			ans-=(b[i]-1);
		}
	}
	printf("%d",ans);
	return 0;
}#include <cstdio>
int main(){
	int n,ans=0;
	scanf("%d",&n);
	int a[n+1];
	for (int i=0; i<n; i++) {
		scanf("%d",&a[i]);
	}
	for (int i=1; i<n-1; i++) {
		for (int j=0; j<i; j++) {
			for (int k=2; k>i && k<n ; k++) {
				if (a[i]+a[j]==a[k]) {
					printf("%d %d",k,a[k]);
					ans++;
				}
			}
		}
	}
	printf("%d",ans);
	return 0;
}