#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>

int main(){
	char n[110], m[110];
	scanf("%s %s", n, m);
	for(int i = 0;i < (int)strlen(n);i++){
		printf("%d", (n[i] ^ m[i] ? 1:0));
	}
	printf("\n");
	return 0;
}

