// P1328
#include <cstdio>
int match(int A, int B){
	int result;
	if (A==B) {
		result = 1; 
	}else if ((B==4&&(A==3||A==2))||(B==3&&(A==0||A==1))||(B==2&&A==0)||(A==4&&(B==0||B==1))||(A==3&&B==2)||(A==2&&B==1)||(A==1&&B==0)) {
		result = 2;
	}else {
		result = 0;
	}
	return result;
}

int A[200],B[200],score[2];
int main(){
	int N,NA,NB;
	scanf("%d%d%d",&N,&NA,&NB);
	for (int i=0; i<NA; i++) {
		scanf("%d",&A[i]);
	}
	for (int i=0; i<NB; i++) {
		scanf("%d",&B[i]);
	}
	for (int i=0; i<N; i++) {
		int result = match(A[i%NA], B[i%NB]);
		switch (result) {
			case 0:score[1]++;break;
			case 1:break;
			case 2:score[0]++;break;
		}
	}
	printf("%d %d",score[0],score[1]);
	return 0;
}