#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>

int main(){
	char input[110];
	scanf("%s",input);
	int c = 1,ans = 0;
	for(int i = 1;i < (int)strlen(input);i++){
		if(input[i] == input[i - 1])c++;
		else c = 1;
		if(c >= 7)ans = 1;
	}
	if(ans)printf("YES\n");
	else printf("NO\n");
	return 0;
}

