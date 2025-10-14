#include <iostream>
#include <ostream>
#include <string>
int main()
{
	int n;
	std::string str = "";
	std::cin >> n;
	std::cin.ignore();
	while (n--) {
		std::getline(std::cin, str);
		std::cout << ((str.find("Genshin") == -1 && str.find("Yuanshen") == -1)
			? "Negative!"
			: "Qidong!") << std::endl;
	}
}