#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>

int main(){
	char input[150];
	scanf("%s",input);
	int a[4];
	memset(a,0,sizeof(a));
	for(int i = 0;i < (int)strlen(input);i++){
		if(input[i] >= '1' && input[i] <= '3')a[input[i] - '0']++;
	}
	int flag = 0;
	for(int i = 1;i < 4;i++){
		while(a[i] > 0){
			if(!flag++)printf("%d", i);
			else printf("+%d", i);
			a[i]--;
		}
	}
	return 0;
}

