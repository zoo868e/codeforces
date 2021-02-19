#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>

int main(){
	char input[110];
	scanf("%s", input);
	char h[7] = "hello";
	int count = 0, now = 0;
	for(int i = 0;i < (int)strlen(input);i++){
		if(input[i] == h[now]){
			count++;
			now++;
		}
	}
	if(count < 5)printf("NO\n");
	else printf("YES\n");
	return 0;
}

