/* #include <iostream>
int main(){
    int i=1,n,a[200];
    std::cin >> n;
    a[0]=n;
    do {
    if (n%2) {
        n/=2;
        a[i++]=n;
    }else {
        n=n*3+1;
        a[i++]=n;
    }
    }while (n!=1);
    i--;
    do {
    std::cout << a[i--];
    }while (i--);
    return 0;
} */

#include <cstdio>
int main(){
    int n,a[210],i=1;
    scanf("%d",&n);
    if (n==1) {
        printf("%d",1);
    }else {
    	a[0]=n;
    	while (n!=1) {
    	    if (n%2 == 0) {
    	        n/=2;
    	        a[i++]=n;
    	    }else {
    	        n=3*n+1;
    	        a[i++]=n;
    	    }
    	}
		a[i]=1;
    	while (i--) {
    		printf("%d ",a[i]);
    	}
    }
    return 0;
}