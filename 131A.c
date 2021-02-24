#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>

int main(){
	char n[110];
	scanf("%s", n);
	int all = 0;
	if((int)strlen(n) == 1){
		printf("%c\n", n[0] ^ 0x20);
		return 0;
	}
	for(int i = 1;i < (int)strlen(n);i++){
		if((n[i] & 0x20) != 0)all++;
	}
	if(all != (int)strlen(n) - 1 && (n[0] & 0x20) == 0){
		for(int i = 0;i < (int)strlen(n);i++){
			printf("%c",n[i] ^ 0x20);
		}
		printf("\n");
		return 0;
	}
	printf("%s",n);
	return 0;
}
