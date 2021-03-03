#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>

int main(){
	char s[1010];
	int ans[26];
	memset(ans, 0, sizeof(ans));
	gets(s);
	for(int i = 0;i < (int)strlen(s);i++){
		if(s[i] >= 'a' && s[i] <= 'z')ans[s[i] - 'a']++;
	}
	int c = 0;
	for(int i = 0;i < 26;i++){
		if(ans[i] > 0){
			c++;
		}
	}
	printf("%d\n", c);
	return 0;
}

