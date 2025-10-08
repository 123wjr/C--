// P1563
#include <cstdio>
#include <string>
std::string people[100000];
int head[100000];
int main() {
	int n, m;
	scanf("%d%d", &n, &m);
	for (int i = 0; i < n; i++) {
		scanf("%d %s",&head[i],people[i].c_str());
	}
	int tem=0;
	for (int i=0; i<m; i++) {
		int direction, step;
		scanf("%d %d",&direction,&step);
		tem=((direction^head[tem])==1)?(step+tem)%n:(tem+n-step)%n;
	}
	printf("%s",people[tem].c_str());
}