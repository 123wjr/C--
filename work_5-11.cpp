// P1205
#include <cstdio>
int main(){
    int n;
    scanf("%d",&n);
    char ori[n][n],tar[n][n];
    for (int i=0; i<n; i++) {
        char waste,tem;
        for (int j=0; j<n; j++) {
            scanf("%c",&tem);
            ori[i][j]=tem;
        }
        scanf("%c",&waste);
    }
    for (int i=0; i<n; i++) {
        char waste,tem;
        for (int j=0; j<n; j++) {
            scanf("%c",&tem);
            tar[i][j]=tem;
        }
        scanf("%c",&waste);
    }
    // 1.
    char tran1[n][n];
    for (int i=0; i<n; i++) {
        for (int j=0; j<n; j++) {
            tran1[i][j]=ori[i][j];
        }
    }
    for (int i=1; i<=3; i++) {
        for (int k=0; k<n; k++) {
            for (int j=0; j<n; j++) {
                tran1[j][n-1-k]=ori[k][j];
            }
        }
    }

}