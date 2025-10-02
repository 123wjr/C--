// P1765
#include <iostream>
#include <ostream>
#include <string>
int main(){
	std::string str;
	std::ios::sync_with_stdio(false);
	std::cin.tie(nullptr);
	std::cin.tie(nullptr);
	std::getline(std::cin,str);
	int length = str.length(),ans=0;
	for (int i=0; i<length; i++) {
		char tem = str[i];
		if (tem==' ') {
			ans++;
		}else if ('a'<=tem && tem<='o') {
			ans+=((tem-'a'+1)%3==0)?3:(tem-'a'+1)%3;
		}else if ('p'<=tem && tem<='s') {
			ans+=tem-'p'+1;
		}else if ('t'<=tem && tem<='v') {
			ans+=tem+1-'t';
		}else {
			ans+=tem+1-'w';
		}
	}
	std::cout << ans << std::endl;
	return 0;
}