#include <iostream>
#include <string>
int cal[26];
int main(){
	char tem;
	int ans=0,max=0;
	while (std::cin >> tem) {
		// only when it is a letter should it enter the add step
		if ('A'<=tem && tem <= 'Z') {
			cal[tem-'A']++;
			if (cal[tem-'A']>max) {
				max=cal[tem-'A'];
			}
		}
	}
	char out_ori[26][max+1];
	for (int i=0; i<26; i++) {
		for (int j=0; j<=max; j++) {
			out_ori[i][j]=' ';
		}
	}
	for (char i='A'; i<='Z'; i++) {
		out_ori[1][max]=i;
	}
	for (int i=0; i<26; i++) {
		for (int j=max-1; j>max-1-cal[i]; j--) {
			out_ori[i][j]='*';
		}
	}
	for (int i=0; i<max+1; i++) {
		std::string out;
		for (int j=0; j<26; j++) {
			out+=out_ori[j][i];
		}
		while (out[out.length()-1]==' ') {
			out = out.substr(0,out.length()-2);
		}
		std::cout << out << std::endl;
	}
	return 0;
}