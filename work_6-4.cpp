// P1553
// 函数封装不熟练，应该先写伪代码的
#include <cmath>
#include <iostream>
#include <string>


std::string delete_space(std::string str){
	int pos = str.length()-1;
	while (str[pos]=='0' && pos!=0) { //太惨痛了，忘记可以只有一个0
		str = str.substr(0,pos--);
	}
	return str;
}

std::string inverse(std::string str){
	std::string tem;
	for (int i=str.length()-1; i>=0; i--) {
		tem=tem+str[i];
	}
	return tem;
}

std::string process(std::string str, char spilt){
	int pos = str.find(spilt);
	std::string part1 = str.substr(0,pos);
	part1 = inverse(delete_space(part1));
	std::string part2 = str.substr(pos+1,str.length()-pos-1);
	part2 = (spilt!='.')?inverse(delete_space(part2)):delete_space(inverse(part2));
	std::string ans = part1+spilt+part2;
	return ans;
}

int main(){
	std::string s;
	std::string mode="int";
	std::cin >> s;
	mode = (s.find('.')!=-1)?"float":mode;
	mode = (s.find('/')!=-1)?"division":mode;
	mode = (s.find('%')!=-1)?"percent":mode;
	if (mode=="int") {
		std::string tem = inverse(delete_space((s)));
		std::cout << tem;
	}
	if (mode=="float") {
		std::string tem = process(s, '.');
		std::cout << tem;
	}
	if (mode == "division") {
		std::string tem = process(s, '/');
		std::cout << tem;
	}
	if (mode == "percent") {
		std::string tem = inverse(delete_space((s.substr(0,s.length()-1))))+'%';
		std::cout << tem;
	}
	return 0;
}