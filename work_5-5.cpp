#include <cstdio>
#include <cstring>

int main(){
    int n,tem=0,target;
    scanf("%d",&n);
    double a[n+1];
    int t[n+1];
    for (int i=0; i<n; i++) {
        scanf("%lf %d",&a[i],&t[i]);
        if (a[i]*t[i]/1>tem) {
            tem=a[i]*t[i]/1;
        }
    }
    int state[tem+1];
    memset(state, 0, sizeof(state));
    for (int i=0; i<n; i++) {
        for (int j=1; j<=t[i]; j++) {
			target=(j*a[i])/1;
			if (state[target]) {
				state[target]=0;
			}else {
				state[target]=1;
			}
		}
    }
	for (int i=0; i<tem+1; i++) {
		if (state[i]) {
			printf("%d",i);
			break;
		}
	}
	return 0;
}