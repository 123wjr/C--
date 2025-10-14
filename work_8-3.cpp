// P1518
#include <algorithm>
#include <cstdio>
#include <cstring>
#include <numeric>
char map[10][10],tem;
int global_time;
struct object{
	int point = 1, posx, last_posx, posy, last_posy, key_time_start=0, key_time_end=0, track[10][10], T=-1, track_time[10][10], stay[10][10];
	void log_move(){
		log();
		if (!end()) {
			move();
		}
	}
	void move(){
		switch (point) {
		case 1:(map[posx-1][posy]!='*'&&posx!=0)?posx--:point++;break;
		case 2:(map[posx][posy+1]!='*'&&posy!=9)?posy++:point++;break;
		case 3:(map[posx+1][posy]!='*'&&posx!=9)?posx++:point++;break;
		case 4:(map[posx][posy-1]!='*'&&posy!=0)?posy--:point=1;break;
		}
	}
	void log(){
		(last_posx==posx&&last_posy==posy)?
			stay[posx][posy]++:
			track[posx][posy]++;
		switch (track[posx][posy]) {
			case 1:
				track_time[posx][posy]=global_time;
				break;
			case 2:
				key_time_start=track_time[posx][posy];
				key_time_end=global_time;
				T=key_time_end-key_time_start;
				break;
		}
		last_posx=posx;
		last_posy=posy;
	}

	
	bool end(){
		if (T==-1) {
			return false;
		}else {
			return true;
		}
	};
}cow,man;

int match(){
	int meet_time=-1;
	for (int i=0; i<10; i++) {
		for (int j=0; j<10; j++) {
			if (man.track[i][j]&&cow.track[i][j]) {
				int T1 = (man.track[i][j]<man.T)?0:man.T;
				int T2 = (cow.track[i][j]<cow.T)?0:cow.T;
				int tem_time;
				for (int t1 = man.track_time[i][j]; t1<man.track_time[i][j]+man.stay[i][j]; t1++) {
					for (int t2 = cow.track_time[i][j]; t2<cow.track_time[i][j]+cow.stay[i][j]; t2++) {
						bool exists = false;
						if (T1 == 0 && T2 == 0) {
							exists = (t1 == t2);
							tem_time=t1;
						} else if (T1 == 0) {
							exists = (t1 >= t2) && ((t1 - t2) % T2 == 0);
							tem_time=t1;
						} else if (T2 == 0) {
							exists = (t2 >= t1) && ((t2 - t1) % T1 == 0);
							tem_time=t2;
						} else {
							exists = ((t2 - t1) % std::gcd(T1, T2) == 0);
							tem_time=std::max(t1,t2);
						}
						if (exists) {
							meet_time=(meet_time!=-1)?std::min(meet_time,tem_time):tem_time;
						}
					}
				}
			}
		}
	}
	return meet_time;
}
	

void init(){
	int i=0;
	while (scanf("%c",&tem)!=EOF) {
		if (tem=='\n') {
			continue;
		}
		map[i/10][i%10]=tem;
		if (tem!='.') {
			if (tem=='C') {
				cow.posx=i/10;
				cow.posy=i%10;
			}else if (tem=='F') {
				man.posx=i/10;
				man.posy=i%10;
			}
		}
		i++;
	}
}

int main(){
	init();
	while (!man.end()||!cow.end()) {
		global_time++;
		man.log_move();
		// cow.log_move();
	}
	match();
	printf("%d\n",(match()==-1)?0:match());
	return 0;
	
}