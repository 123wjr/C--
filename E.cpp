#include <iostream>
#include <string>
int main(){
	std::ios::sync_with_stdio(false);
	std::cin.tie(0);
	std::cout.tie(0);
	int cases, columns;
	std::cin >> cases;
	while(cases--){
		std::string tem1="",tem2="";
		bool flag=true;
		std::cin >> columns;
		std::cin >> tem1;
		std::cin >> tem2;
		for (int i=0; i<columns; i++) {
			if (tem1[i]==tem2[i] && tem1[i]=='1'){
				flag=false;
				break;
			}
		}
		std::cout << ((flag)?"YES":"NO") << std::endl;
	}
	return 0;
}