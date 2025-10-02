// P3741
#include <cstring>
#include <iostream>
#include <string>
// int main(){
// 	std::string str;
// 	int pos,pos1,pos2,pos3,pos4,sum=0,len;
// 	std::cin >> len;
// 	std::cin >> str;
// 	pos = str.find("VK");
// 	pos1 = str.find("VV");
// 	pos2 = str.find("KKK");
// 	pos3 = str.find("KK");
// 	pos4 = str.find("VVV");
// 	if ((pos == -1 && pos1 == -1 && pos3 ==-1) || len < 2) {
// 		std::cout << 0 << std::endl;
// 		return 0;
// 	}else {
// 		if (pos2!=-1) {
// 			str = str.replace(pos2,3,"KVK");
// 		}else if (pos4!=-1) {
// 			str = str.replace(pos4,3,"VKV");
// 		}else if (pos3!=-1) {
// 			str = str.replace(pos3,2,"VK");
// 		}else if (pos1!=-1) {
// 			str = str.replace(pos1,2,"VK");
// 		}
// 		pos = str.find("VK");
// 		while (pos!=-1) {
// 			sum++;
// 			pos = str.find("VK",pos+1);
// 		}
// 	}
// 	std::cout << sum << std::endl;
// 	return 0;
// }
int main(){
	std::string str;
	int length, max=0, pos;
	std::cin >> length;
	std::cin >> str;
	pos = str.find("VK");
	while (pos!=-1) {
		max++;
		pos = str.find("VK",pos+1);
	}
	for (int i=0; i<length; i++) {
		std::string str_tem=str;
		int tem=0;
		str_tem[i]=(str[i]=='V')?'K':'V';
		pos = str_tem.find("VK");
		while (pos!=-1) {
			tem++;
			pos = str_tem.find("VK",pos+1);
		}
		max=(tem>max)?tem:max;
	}
	std::cout << max;
}