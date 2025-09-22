#include <cstdio>
#include <cstring>
int main(){
    int n,m,tem=0;
    scanf("%d %d",&n,&m);
    int a[n+1];
    int sum=100*n;
    memset(a, 0, sizeof(a));
    for (int i=0; i<n; i++) {
        scanf("%d",&a[i]);
    }
    for (int i=0; i<n-m+1; i++) {
        tem = 0;
        for (int j=i; j<i+m; j++) {
            tem+=a[j];
        }
        if (tem<sum) {
            sum=tem;
        }
    }
    printf("%d",sum);
}