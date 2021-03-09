#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>

int main(){
	int a, b;
	scanf("%d %d", &a, &b);
	int min = a < b ? a:b;
	if(min % 2)printf("Akshat\n");
	else printf("Malvika\n");
	return 0;
}

