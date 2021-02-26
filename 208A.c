#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>

int main(){
	char in[220];
	int flag = 0;
	scanf("%s", in);
	int len = (int)strlen(in);
	for(int i = 0;i < len;i++){
		if(i < len - 2 && in[i] == 'W' && in[i + 1] == 'U' && in[i + 2] == 'B'){
			i += 2;
			if(flag == 1)printf(" ");
			flag = 0;
		}
		else {
			printf("%c", in[i]);
			flag = 1;
		}
	}
	return 0;
}

