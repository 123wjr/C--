#include <cstdio>
int ans[81];
int main()
{
	int s1,s2,s3;
	scanf("%d %d %d",&s1,&s2,&s3);
	for (int i=1; i<=s1; i++) {
		for (int j=1; j<=s2; j++) {
			for (int k=1; k<=s3; k++) {
				ans[i+j+k]++;
			}
		}
	}
	for (int i=3; i<=80; i++) {
		if (ans[i]==0) {
			break;
		}
		
	}
}