// P5015
#include <cstring>
#include <iostream>
#include <string>
int main(){
	std::string tem;
	int ans=0;
	while (std::cin >> tem) {
		ans+=tem.length();
	}
	std::cout << ans;
	return 0;
}