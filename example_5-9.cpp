#include <cstdio>
int main(){
    int N;
    scanf("%d",&N);
    int a[N+1][N+1];
    a[0][N/2]=1;
    for (int K=2; K<=N*N; K++) {
        for (int i=0; i<N; i++) {
            if (a[i]) {
            statements
            }
        }
    }
}