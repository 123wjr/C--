// P1098

#include <cstdio>
#include <iostream>
#include <string>
int pos=-1;
std::string str, pre, aft;
int p1,p2,p3;

std::string repeat(char ori){
	std::string ans="";
	for (int i=0; i<p2; i++) {
		ans+=ori;
	}
	return ans;
};

std::string create_array(char before, char next){
	if (before >= next || (next - before > 26) || before == '-' || next == '-') {
		return "-";
	}else if(next==before+1){
		return "";
	}else {
		std::string tem="";
		for (char i=(p3==1)?before+1:next-1; (p3==1)?i<next:i>before; (p3==1)?i++:i--) {
			tem+=repeat((p1==3)?'*':(p1==1)?i:(i<'A')?i:i-'a'+'A');
		}
		return tem;
	}
}

int main(){
	scanf("%d%d%d",&p1,&p2,&p3);
	// getchar();
	char tem;
	while (std::cin>>tem) {
		str+=tem;
	}
	pos = str.find('-');
	if (pos==0) {
		pos = str.find('-',pos+1);
	}
	while (pos!=-1 && pos<str.length()) {
		pre = str.substr(0,pos);
		aft = str.substr(pos+1,str.length()-pos-1);
		str = pre + create_array(str[pos-1], str[pos+1]) + aft;
		pos = str.find('-',pos+1);
	}
	printf("%s",str.c_str());
}
