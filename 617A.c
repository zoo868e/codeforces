#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>

int main(){
	int i;
	scanf("%d", &i);
	printf("%d\n", i/5 + ((i % 5) == 0 ? 0:1));
	return 0;
}

