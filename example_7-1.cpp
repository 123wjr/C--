// P5735

#include <cmath>
#include <cstdio>
double dis(double x1, double y1, double x2, double y2) {
	return std::sqrt((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2));
}

int main(){
	double x1,x2,x3,y1,y2,y3;
	scanf("%lf %lf",&x1,&y1);
	scanf("%lf %lf",&x2,&y2);
	scanf("%lf %lf",&x3,&y3);
	printf("%.2lf",
		dis(x1, y1, x2, y2)+
		dis(x1, y1, x3, y3)+
		dis(x2, y2, x3, y3)
	);
}