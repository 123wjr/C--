// P1518
#include <cstdio>
char map[10][10],tem;
struct object{
	int point = 1,posx,posy;
	void move(){
		switch (this->point) {
		case 1:(map[this->posx-1][this->posy]!='*')?this->posx--:this->point++;break;
		case 2:(map[this->posx][this->posy+1]!='*')?this->posy++:this->point++;break;
		case 3:(map[this->posx-1][this->posy]!='*')?this->posx:this->point++;break;
		case 4:(map[this->posx-1][this->posy]!='*')?this->posx--:this->point=1;break;
		}
	}
}cow,man;
void init(){
	int i=0;
	while (scanf("%c",&tem)!=EOF) {
		if (tem=='\n') {
			continue;
		}
		map[i/10][i++%10]=tem;
	}
}

int main(){
	init();
	return 0;
}