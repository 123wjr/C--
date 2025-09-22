/*
查错提示：不正常运行不一定是逻辑问题，也可能是前提不满足
*/
#include <cstdio>
#include <cstring>
int main(){
    int n,m,tem=0;
    scanf("%d %d",&n,&m);
    int a[n+1];
    int sum=100*n; //原来定义sum=100过小
    memset(a, 0, sizeof(a));
    for (int i=0; i<n; i++) {
        scanf("%d",&a[i]);
    }
    for (int i=0; i<n-m+1; i++) {
        tem = 0;
        for (int j=i; j<i+m; j++) {
            tem+=a[j];
        }
        if (tem<sum) { //原来这里是>，需要明确大小关系
            sum=tem;
        }
    }
    printf("%d",sum);
}