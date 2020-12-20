#include <stdio.h>
#include <string.h>

int main(){
	int m,ans;
	char s[10010];
	gets(s);
	scanf("%d",&m);
	int lr[2][m];
	for(int i = 0;i < m;i++){
		scanf("%d %d",&lr[0][i],&lr[1][i]);
	}
	for(int i = 0;i < m;i++){
		ans = 0;
		for(int l = lr[0][i];l < lr[1][i];l++){
			if(s[l - 1] == s[l])ans++;
		}
		printf("%d\n",ans);
	}
	return 0;
}
