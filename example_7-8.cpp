// P5461

#include <bits/stdc++.h>
#include <cstdio>
#include <cstring>
int init();
void process();
void output();
int n;

int init(){
	scanf("%d",&n);
	int a[n][n];
	for (int i=0; i<n; i++) {
		for (int j=0; j<n; j++) {
			a[i][j]=1;
		}
	}
	return a[n][n];
}

void process(int a[n][n]){

}

void output(int a[n][n]){
	for (int i=0; i<n; i++) {
		for (int j=0; j<n; j++) {
			printf("%d ",a[i][j]);
		}
	}
}

int main(){
	int matrix = init();
	process();
}