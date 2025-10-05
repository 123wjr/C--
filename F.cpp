#include <cstdio>
int main(){
	int cases;
	scanf("%d",&cases);
	while(cases--){
		int n,m,l,r;
		scanf("%d%d%d%d",&n,&m,&l,&r);
		printf("%d %d\n",(m+l>0)?l:-m,(m+l>0)?l+m:0);
	}
	return 0;
}