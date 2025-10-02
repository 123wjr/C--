#include <cstdio>
int main(){
	unsigned cases,element;
	scanf("%d",&cases);
	for(int i=0;i<cases;i++){
		unsigned tem,sum=0;
		scanf("%d",&element);
		for (int i=0; i<element; i++) {
			scanf("%d",&tem);
			(tem>=1)?sum+=tem:sum++;
		}
		printf("%d\n",sum);
	}
	return 0;
}