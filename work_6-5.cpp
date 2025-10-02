// P1603
#include <iostream>
#include <string>
int sum[21],num[100];
int main(){
	std::string dict[26]={ " one " , " two " , " three " , " four " , " five " , " six " , " seven " , " eight " , " nine " , " ten " ,	 " eleven " , " twelve " , " thirteen " , " fourteen " , " fifteen " , " sixteen " , " seventeen " , " eighteen " , " nineteen " , " twenty " , " a " , " both " , " another " , " first " , " second " , " third " };
	std::string str;
	std::getline(std::cin,str);
	str=' '+str+' ';
	for (int i=0; i<26; i++) {
		int pos=0;
		pos = str.find(dict[i]);
		while (pos!=-1) {
			if (0<=i && i<=19) {
				++sum[i+1];
			}else if (20<=i&&i<=22) {
				++sum[1];
			}else if (23<=i &&i<=24) {
				++sum[2];
			}else {
				++sum[3];
			}
			pos = str.find(dict[i],pos+1);
		}
	}
	for (int i=1; i<21; i++) {
		num[(i*i)%100]+=sum[i];
	}
	std::string ans="";
	for (int i=1; i<100; i++) {
		if (num[i]==0) {
			continue;
		}
		while (num[i]--) {
			std::string tem=(i<10)?'0'+std::to_string(i):std::to_string(i);
			ans+=tem;
		}
	}
	if (ans=="") {
		std::cout << 0 << std::endl;
		return 0;
	}
	while (ans[0]=='0') {
		ans = ans.substr(1,ans.length()-1);
	}
	std::cout << ans;
	return 0;
}