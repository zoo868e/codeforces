#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>

int main(){
	int n;
	scanf("%d", &n);
	char input[50];
	char pre;
	int count = 0;
	scanf("%s", input);
	pre = input[0];
	for(int i = 1;i < (int)strlen(input);i++){
		if(input[i] != pre)pre = input[i];
		else count++;
	}
	printf("%d\n", count);
	return 0;
}

