// P1914
#include <cstdio>
#include <iostream>
int main(){
	int move;
	char code;
	scanf("%d\n", &move);
	while (std::cin >> code) {
		if (code + move > 'z') {
			code = (code + move - 'a') % 26 + 'a';
		}else {
			code += move;
		}
		printf("%c",code);
	}
	return 0;
}