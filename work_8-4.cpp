// P1067

#include <cstdio>
#include <cstdlib>
int n;
int coefficients[100];

void init(){
	scanf("%d",&n);
	for (int i=0; i<n+1; i++) {
		scanf("%d",&coefficients[i]);
	}
}

int main(){
	init();
	if (n==0) {
		printf("%d",coefficients[0]);
		return 0;
	}else if (coefficients[0]==-1 && n==1) {
		printf("-x");
		return 0;
	}else if (coefficients[0]==1 && n==1) {
		printf("x");
		return 0;
	}else if (coefficients[0]==1) {
		printf("x^%d",n);
	}else if (coefficients[0]==-1) {
		printf("-x^%d",n);
	}else if (coefficients[0]>0) {
		printf("%dx^%d",coefficients[0],n);
	}else {
		printf("-%dx^%d",std::abs(coefficients[0]),n);
	}
	for (int i=1; i<n+1; i++) {
		if (i<n-1) {
			switch (coefficients[i]) {
				case 0: break;
				case 1: printf("+x^%d",n-i); break;
				case -1: printf("-x^%d",n-i); break;
				default: printf("%c%dx^%d", (coefficients[i]>0)?'+':'-', std::abs(coefficients[i]), n-i); break;
			}
		}else if (i==n-1) {
			if (coefficients[i]>0) {
				printf("+%dx",coefficients[i]);
			}else if (coefficients[i]<0) {
				printf("-%dx",std::abs(coefficients[i]));
			}	
		}else {
			if (coefficients[i]>0) {
				printf("+%d",coefficients[i]);
			}else if (coefficients[i]<0) {
				printf("-%d",std::abs(coefficients[i]));
			}
		}
	}
	return 0;
}