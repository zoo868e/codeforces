#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>

int main(){
	int a, b, x;
	scanf("%d %d", &a, &b);
	x = a > b ? b:a;
	printf("%d %d\n", x, (a + b - 2 * x) / 2);
	return 0;
}

