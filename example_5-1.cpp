#include <iostream>
using namespace std;
int main(){
    int n,a[110],sum;
    cin >> n;
    for (int i=0; i<n; i++) {
        sum = 0;
        cin >> a[i];
        for (int j=i-1; j>=0; j--){
            if (a[j]<a[i]) {
                sum++;
            }
        printf("%d\n",sum);
        }
    }
    return 0;
}