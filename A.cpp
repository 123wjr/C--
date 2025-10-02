// A
#include <cstdio>
int main(){
	int line;
	scanf("%d",&line);
	for (int i=0; i<line; i++) {
		unsigned num;
		scanf("%d",&num);
		printf("%d\n",((num>=3)?3:num+1)+3*(num/15)+((num/15>0 && num%15<3)?num%15-2:0));
	}
	return 0;
}