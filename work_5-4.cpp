#include <cstdio>
int ans[81];
int main()
{
	int s1,s2,s3,max=0,tem=0;
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
		if (ans[i]>tem) {
			tem=ans[i];//这里处理一个打擂台的变量问题
			max=i;//分清需要局部变量还是全局
		}
	}
	printf("%d",max);
	return 0;
}