// P1321
#include <iostream>
#include <string>
int main(){
	std::string str;
	std::getline(std::cin,str);
	int boy=0,girl=0;
	char state='n',now,last;
	for (int i=0; i<str.length(); i++) {
		now = str[i];
		if (now=='.') {
			last=now;
			continue;
		}
		bool b_con = (last=='b'&&now=='o')||(last=='o'&&now=='y');
		bool g_con = (last=='g'&&now=='i')||(last=='i'&&now=='r')||(last=='r'&&now=='l');
		if (now=='b' || now=='o' || now=='y') {
			if (state=='n') {
				state='b';
				boy++;
			}else if (state=='g') {
				state='b';
				boy++;
			}else if (!b_con) {
				boy++;
			}
		}else{
			if (state=='n') {
				state='g';
				girl++;
			}else if (state=='b') {
				state='g';
				girl++;
			}else if (!g_con) {
				girl++;
			}
		}
		last=now;
	}
	std::cout << boy << std::endl;
	std::cout << girl << std::endl;
	return 0;
}