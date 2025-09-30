// P1308
#include <iostream>
#include <string>
int main(){
	std::string target,text;
	std::getline(std::cin, target);
	std::getline(std::cin, text);
	target = ' '+target+' ';
	text = ' '+text+' ';
	for (int i=0; i<text.length(); i++) {
		if ('A'<=text[i] && text[i]<='Z') {
			text[i]+='a'-'A';
		}
	}
	for (int i=0; i<target.length(); i++) {
		if ('A'<=target[i] && target[i]<='Z') {
			target[i]+='a'-'A';
		}
	}
	int sum=0,first_pos;
	int pos=0;
	pos=text.find(target);
	if (pos==-1) {
		std::cout << -1;
		return 0;
	}else {
		first_pos=pos;
		sum++;
	}
	while (pos!=-1) {
		pos=text.find(target,pos+1);
		if (pos==-1) break;
		sum++;
	}
	std::cout << sum << ' ' << first_pos << std::endl;
	return 0;
}