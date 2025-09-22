#include <cstdio>
#include <cstring>

int main(){
    int n,tem=0;
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
        
    }
}