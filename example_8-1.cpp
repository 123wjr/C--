// P1042
#include <cstdio>
#include <iostream>
#include <string>
int W,L;
char tem;
std::string result="";
bool win(int rule){
	return ((W==rule && W-L>=2)||(W-L==2&&W>rule)||(L==rule && L-W>=2)||(L-W==2&&L>rule));
}

int main(){
	std::ios::sync_with_stdio(false);
	std::cin.tie(0);
	std::cout.tie(0);
	do{
		std::cin>>tem; 
		if (tem !='\n'){
			result+=tem;
			if (tem !='E') {
				(tem=='W')?(W++):L++;
			}
		}
		if (win(11)||tem=='E') {
			printf("%d:%d\n",W,L);
			W=L=0;
		}
	}while (tem!='E');
	printf("\n");
	for (int i=0; i<result.length(); i++) {
		if (result[i] !='E') {
			(result[i]=='W')?(W++):L++;
		}
		if (win(21)||result[i]=='E') {
			printf("%d:%d\n",W,L);
			W=L=0;
		}
	}
	return 0;
}