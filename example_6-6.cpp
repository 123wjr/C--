// P5734
#include <cstdio>
#include <iostream>
#include <ostream>
#include <string>
int main(){
	int q,start,length;
	std::string str,tem;
	std::cin >> q;
	std::cin >> str;
	for (int i=0; i<q; i++) {
		char num;
		std::cin >> num;
		switch (num) {
			case '1':
				std::cin >> tem;
				str+=tem;
				std::cout << str << std::endl;
				break;
			case '2':
				scanf("%d %d",&start,&length);
				str=str.substr(start,length);
				std::cout << str << std::endl;
				break;
			case '3':
				std::cin >> start >> tem;
				str=str.insert(start,tem);
				std::cout << str << std::endl;
				break;
			case '4':
				std::cin >> tem;
				std::cout << (int)str.find(tem) << std::endl;
				break;
		}
	}
	return 0;
}