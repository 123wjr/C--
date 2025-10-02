// P1597
#include <cstdio>
#include <iostream>
#include <string>
int main(){
	char a,b,c;
	std::string str;
	std::ios::sync_with_stdio(false);
	std::cin.tie(0);
	std::cout.tie(0);
	std::getline(std::cin,str);
	a=b=c='0';
	for (int i=0; i<str.length(); i+=5) {
		switch (str[i]) {
		case 'a':
			if (str[i+3]=='b') {
				a=b;
			}else if (str[i+3]=='c') {
				a=c;
			}else if ('0'<=str[i+3] && '9'>=str[i+3]) {
				a=str[i+3];
			};
			break;
		case 'b':
			if (str[i+3]=='a') {
				b=a;
			}else if (str[i+3]=='c') {
				b=c;
			}else if ('0'<=str[i+3] && '9'>=str[i+3]) {
				b=str[i+3];
			};
			break;
		case 'c':
			if (str[i+3]=='b') {
				c=b;
			}else if (str[i+3]=='a') {
				c=a;
			}else if ('0'<=str[i+3] && '9'>=str[i+3]) {
				c=str[i+3];
			};
			break;
		}
	}
	std::cout << a << ' ' << b << ' ' << c << std::endl;
	return 0;
}