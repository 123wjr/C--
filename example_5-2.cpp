#include <iostream>
int main(){
	int n=0,a[100],tem;
	do {
		std::cin>>a[n++];
	}while (a[n-1]!=0);
	// while (--n) {
	// 	std::cout <<a[n-1];
	// }
	n--; // --n
	while (n--) { //while (--n)不行
		std::cout << a[n];
	}
	return 0;
}