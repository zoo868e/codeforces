#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>

int main(){
	char x[20];
	scanf("%s", x);
	int ans = 0;
	for(int i = 0;i < (int)strlen(x);i++){
		if(x[i] == '4' || x[i] == '7')ans++;
	}
	if(ans == 7 || ans == 4)printf("YES\n");
	else printf("NO\n");
	return 0;
}

