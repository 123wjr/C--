// P1957
#include <cstdio>
#include <cstring>
int main(){
	int i,num1,num2;
	char tem[30]={'0'},last,ans[30];
	scanf("%d\n",&i);//这里不加\n会导致fgets跳过问题
	for (int line=0; line<i; line++) {
		fgets(tem, sizeof(tem), stdin);
		if (tem[0]=='a' || tem[0]=='b' || tem[0]=='c') {
			last=tem[0];
			tem[0]=' ';
		}
		sscanf(tem,"%d %d",&num1,&num2);
		switch (last) {
		case 'a':sprintf(ans, "%d+%d=%d",num1,num2,num1+num2);break;
		case 'b':sprintf(ans, "%d-%d=%d",num1,num2,num1-num2);break;
		case 'c':sprintf(ans, "%d*%d=%d",num1,num2,num1*num2);break;
		}
		printf("%s\n%d\n",ans,strlen(ans));
	}
}