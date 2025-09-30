// P5733
// #include <cstdio>
// int main(){
// 	char s[100];
// 	scanf("%s",s);
// 	for (int i=0; i<s[i]!='\0'; i++) {
// 		if ('a'<=s[i] && s[i]<='z') {
// 			s[i] = s[i] - 'a' + 'A';
// 		}
// 	}
// 	printf("%s\n", s);
// 	return 0;
// }

#include <cstdio>
int main(){
	char s;
	while (1) {
		s = getchar();
		if (s == EOF) break;
		if ('a' <= s && s <= 'z') {
			s = s - 'a' + 'A';
		}
		putchar(s);
	}
}