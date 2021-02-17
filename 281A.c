#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>

int main(){
	char input[1100];
	scanf("%s", input);
	input[0] = input[0] & 0xffdf;
	printf("%s\n", input);
	return 0;
}

