// B
#include <cstdio>
int main(){
	int t;
	scanf("%d",&t);
	for (int i=0; i<t; i++) {
		unsigned n,a,b;
		scanf("%d %d %d",&n,&a,&b);
		printf("%s\n",(!((n-b)%2) && (b>=a || !((n-a)%2))?"yes":"no"));
	}
	return 0;
}