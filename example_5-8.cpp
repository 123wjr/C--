/*
对输入的个人数据，可以少用一次循环，但是与我的本质相同
*/
#include <cstdio>
int main(){
    int n,p[7],a[7]={0,0,0,0,0,0,0},sum[8]={0,0,0,0,0,0,0,0},tem=0;
    scanf("%d",&n);
    scanf("%d %d %d %d %d %d %d",&p[0],&p[1],&p[2],&p[3],&p[4],&p[5],&p[6]);
    for (int i=0; i<n; i++) {
        tem = 0;
        scanf("%d %d %d %d %d %d %d",&a[0],&a[1],&a[2],&a[3],&a[4],&a[5],&a[6]);
        for (int j=0; j<7; j++) {
            for (int k=0; k<7; k++) {
                if (a[j]==p[k]) {
                    tem++;
                }
            }
        }
        sum[7-tem]++; // sum[7-tem]++ 在tem=0时越界，故扩大sum的范围
    }
    for (int i=0; i<7; i++) {
        printf("%d ",sum[i]);
    }
    return 0;
}