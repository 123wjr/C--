/* 
漏洞：memset只能设置0与-1，原因：memset 用于字节填充，这里会把每个字节都填成 1，但 int 类型是 4 字节，这样会导致每个元素的值不是 1，而是 0x01010101（即 16843009）。正确做法是用循环初始化，或者用 memset(v, 0, sizeof(v)); 然后用循环赋值为 1。
*/
#include <cstdio>
#include <cstring>
int main(){
	int w,x,h,q,sum=0;
	scanf("%d %d %d",&w,&x,&h);
	scanf("%d",&q);
	int v[w][x][h];
	for (int xz=0; xz<w; xz++) {
		for (int yz=0; yz<x; yz++) {
			for (int zz=0; zz<h; zz++) {
				v[xz][yz][zz]=1;
			}
		}
	}
	for (int i=0; i<q; i++) {
		int x1,y1,z1,x2,y2,z2;
		scanf("%d %d %d %d %d %d",&x1,&y1,&z1,&x2,&y2,&z2);
		for (int xz=x1-1; xz<=x2-1; xz++) {
			for (int yz=y1-1; yz<=y2-1; yz++) {
				for (int zz=z1-1; zz<=z2-1; zz++) {
					v[xz][yz][zz]=0;
				}
			}
		}
	}
	for (int xz=0; xz<w; xz++) {
		for (int yz=0; yz<x; yz++) {
			for (int zz=0; zz<h; zz++) {
				sum+=v[xz][yz][zz];
			}
		}
	}
	printf("%d",sum);
	return 0;
}