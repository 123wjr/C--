#include <cstdio>
#include <cstring>
int main(){
    int M,N,a[11],tem=0;
    memset(a, 0, sizeof(a));
    scanf("%d %d",&M,&N);
    for (int i=M; i<=N; i++) {
        tem =i;
        while (tem!=0) {
        a[tem%10]++;
        tem/=10;
        }
    }
    for (int i=0; i<10; i++) {
        printf("%d ",a[i]);
    }
    return 0;
}