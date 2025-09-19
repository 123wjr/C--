#include <cstdio>
int main(){
    int n,p[7],a[7]={0,0,0,0,0,0,0},sum[7]={0,0,0,0,0,0,0},tem=0;
    scanf("%d",&n);
    scanf("%d %d %d %d %d %d %d",&p[0],&p[1],&p[2],&p[3],&p[4],&p[5],&p[6]);
    for (int i=0; i<7; i++) {
        tem = 0;
        scanf("%d %d %d %d %d %d %d",&a[0],&a[1],&a[2],&a[3],&a[4],&a[5],&a[6]);
        for (int j=0; j<7; j++) {
            for (int k=0; k<7; k++) {
                if (a[j]==p[k]) {
                    tem++;
                }
            }
        }
        sum[7-tem]++;
    }
    for (int i=0; i<7; i++) {
        printf("%d ",sum[i]);
    }
    return 0;
}