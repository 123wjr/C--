// P1125
#include <cstdio>
#include <iostream>
int main(){
	char tem;
	int num[26],max=0,min=100;
	for (int i=0; i<26; i++) {
		num[i]=0;
	}
	while (1) {
		tem = getchar();
		if (tem==EOF) {
			break;
		}
		num[tem-'a']++;
		if (num[tem-'a']>max) {
			max=num[tem-'a'];
		}
	}
	for (int i=0; i<26; i++) {
		if (num[i]<min && num[i]>0) { // 一开始未考虑初始化与最小值的冲突，要通过num[i]>0解决
			min=num[i];
		}
	}
	bool judge=true;
	if (max-min <2) { // 质数特判，因为(max-min)%i无法解决
		judge = false;
	}
	for (int i=2; i<max-min; i++) { // 这里其实可以用 i*i<max-min
		if ((max-min)%i==0) {
			judge=false;
			break;
		}
	}
	if (judge == true) {
		std::cout<<"Lucky Word\n";
		std::cout<<max-min;
	}else {
		std::cout<<"No Answer\n";
		std::cout<<0;
	}
}