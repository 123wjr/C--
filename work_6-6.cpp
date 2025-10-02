// P1200
#include <iostream>
#include <string>
int main(){
	std::string team,comet;
	int ans_comet=1,ans_team=1;
	std::getline(std::cin,comet);
	std::getline(std::cin,team);
	for (int i=0; i<comet.length(); i++) {
		ans_comet*=(comet[i]-'A'+1);
	}
	for (int i=0; i<team.length(); i++) {
		ans_team*=(team[i]-'A'+1);
	}
	std::cout << ((ans_team%47==ans_comet%47)?"GO":"STAY");
	return 0;
}