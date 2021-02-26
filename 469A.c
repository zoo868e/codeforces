#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>

int main(){
	int n, x, y;
	scanf("%d %d", &n, &x);
	int f[n];
	memset(f, 0, sizeof(f));
	for(int i = 0;i < x;i++){
		scanf("%d", &y);
		y--;
		f[y]++;
	}
	scanf("%d", &x);
	for(int i = 0;i < x;i++){
		scanf("%d", &y);
		y--;
		f[y]++;
	}
	int flag = 1;
	for(int i = 0;i < n;i++){
		if(f[i] == 0)flag = 0;
	}
	if(flag)printf("I become the guy.\n");
	else printf("Oh, my keyboard!\n");
	return 0;
}

